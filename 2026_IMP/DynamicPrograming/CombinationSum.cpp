#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<vector<int>>&res,vector<int>&combination,vector<int>&candidates,int start,int target){
    if(target==0){
        res.push_back(vector<int>(combination));
    }
    else if(target<0){
        return;
    }
    for(int i= start;i<candidates.size();i++){
        combination.push_back(candidates[i]);
        backtrack(res,combination,candidates,i,target-candidates[i]);
        combination.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>res;
    vector<int>combination;
    backtrack(res,combination,candidates,0,target);
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