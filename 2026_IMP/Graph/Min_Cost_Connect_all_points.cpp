#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

class Solution {
public:

    // Function to calculate Manhattan Distance
    int manDist(vector<vector<int>>& points, int i, int j) {
        return abs(points[i][0] - points[j][0]) +
               abs(points[i][1] - points[j][1]);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();

        vector<bool> mstSet(n, false);

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        int mstCost = 0;

        // Start from point 0
        pq.push({0, 0});

        while (!pq.empty()) {

            auto p = pq.top();
            pq.pop();

            int wt = p.first;
            int node = p.second;

            if (mstSet[node])
                continue;

            mstSet[node] = true;
            mstCost += wt;

            // Add all possible edges from current node
            for (int i = 0; i < n; i++) {
                if (!mstSet[i] && i != node) {
                    int edgeWt = manDist(points, node, i);
                    pq.push({edgeWt, i});
                }
            }
        }

        return mstCost;
    }
};

int main() {

    Solution obj;

    vector<vector<int>> points = {
        {0, 0},
        {2, 2},
        {3, 10},
        {5, 2},
        {7, 0}
    };

    cout << "Minimum Cost to Connect All Points = "
         << obj.minCostConnectPoints(points) << endl;

    return 0;
}