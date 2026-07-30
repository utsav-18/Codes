#include <bits/stdc++.h>
using namespace std;

    int t;
    vector<int> dt, low;

    void dfs(int u, int parU, vector<vector<int>>& adj,
             vector<vector<int>>& bridges) {

        dt[u] = low[u] = ++t;

        for (int v : adj[u]) {

            if (dt[v] == -1) {

                dfs(v, u, adj, bridges);

                low[u] = min(low[u], low[v]);

                if (low[v] > dt[u]) {
                    bridges.push_back({u, v});
                }
            }
            else if (v != parU) {
                low[u] = min(low[u], dt[v]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {

        vector<vector<int>> adj(n);

        for (auto &edge : connections) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        t = 0;
        dt.assign(n, -1);
        low.assign(n, -1);

        vector<vector<int>> bridges;

        for (int i = 0; i < n; i++) {
            if (dt[i] == -1)
                dfs(i, -1, adj, bridges);
        }

        return bridges;
    }


int main() {

    int n = 4;
    vector<vector<int>> connections = {
        {0,1},
        {1,2},
        {2,0},
        {1,3}
    };

    vector<vector<int>> ans = criticalConnections(n, connections);

    cout << "Critical Connections:\n";
    for (auto &edge : ans) {
        cout << edge[0] << " " << edge[1] << endl;
    }

    return 0;
}