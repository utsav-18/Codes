#include <bits/stdc++.h>
using namespace std;

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> graph[n];

        for(int i = 0; i < flights.size(); i++){
            int u = flights[i][0];
            int v = flights[i][1];
            int wt = flights[i][2];
            graph[u].push_back({v, wt});
        }

        queue<pair<int,pair<int,int>>> q;
        vector<int> dist(n, INT_MAX);

        dist[src] = 0;
        q.push({src, {0, -1}});

        while(!q.empty()){
            auto val = q.front();
            q.pop();

            int node = val.first;
            int cost = val.second.first;
            int stops = val.second.second;

            for(auto edge : graph[node]){
                int v = edge.first;
                int wt = edge.second;

                if(dist[v] > cost + wt && stops + 1 <= k){
                    dist[v] = cost + wt;
                    q.push({v, {dist[v], stops + 1}});
                }
            }
        }

        if(dist[dst] == INT_MAX)
            return -1;

        return dist[dst];
    }


int main() {

    int n = 4;
    vector<vector<int>> flights = {
        {0,1,100},
        {1,2,100},
        {2,3,100},
        {0,2,500}
    };

    int src = 0;
    int dst = 3;
    int k = 2;

    cout << findCheapestPrice(n, flights, src, dst, k) << endl;

    return 0;
}