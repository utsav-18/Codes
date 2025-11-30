//combination sum of array elements;
#include <iostream>
#include <vector>
using namespace std;

void combination(vector<vector<int>>& ans, vector<int> v, vector<int>& candidates, int target, int idx) {
    if (target == 0) {
        ans.push_back(v);
        return;
    }
    for (int i = idx; i < candidates.size(); i++) {
        if (target - candidates[i] >= 0) {
            v.push_back(candidates[i]);
            combination(ans, v, candidates, target - candidates[i], i);
            v.pop_back();
        }
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> v;
    combination(ans, v, candidates, target, 0);
    return ans;
}

int main() {
    vector<int> x = {2, 3, 4};
    vector<vector<int>> fans = combinationSum(x, 8);

    for (int i = 0; i < fans.size(); i++) {
        for (int j = 0; j < fans[i].size(); j++) {
            cout << fans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
