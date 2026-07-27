#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void dfs(int i, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[i] = true;

        for (int j = 0; j < adj[i].size(); j++) {
            if (adj[i][j] == 1 && !vis[j]) {
                dfs(j, adj, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int numOfProvinces = 0;
        int n = isConnected.size();

        vector<bool> vis(n, false);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, isConnected, vis);
                numOfProvinces++;
            }
        }

        return numOfProvinces;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> isConnected = {
        {1, 1, 0},
        {1, 1, 0},
        {0, 0, 1}
    };

    cout << "Number of Provinces: " << obj.findCircleNum(isConnected) << endl;

    return 0;
}