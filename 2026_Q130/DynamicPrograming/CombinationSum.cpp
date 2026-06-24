#include <iostream>
#include <vector>
using namespace std;

    void backTrack(int target, vector<vector<int>>& res,
                   vector<int>& combination, int start,
                   vector<int>& candidates) {

        if (target == 0) {
            res.push_back(vector<int>(combination));
        }
        else if (target < 0) {
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            combination.push_back(candidates[i]);
            backTrack(target - candidates[i], res, combination, i, candidates);
            combination.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> res;
        vector<int> combination;

        backTrack(target, res, combination, 0, candidates);
        return res;
    }



    int main(){
        vector<int>nums;
        nums={1,2,3,4,5,6,7,8,9};
        int target = 5;
        vector<vector<int>>ans = combinationSum(nums,target);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }