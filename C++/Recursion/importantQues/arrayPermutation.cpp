#include <iostream>
#include <vector>

using namespace std;

    void solve(vector<int>nums, vector<vector<int>> &ans,int idx){
        if(idx>=nums.size()){
           ans.push_back(nums);
            return;
        }
        for(int j=idx;j<nums.size();j++){
            swap(nums[idx],nums[j]);
            solve(nums,ans,idx+1);
            swap(nums[idx],nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums){
        vector<vector<int>> ans;
        int idx=0;
        solve(nums,ans,idx);
        return ans;
    }

int main() {
    vector<int>v;
    v={1,2,3,4};
    
    vector<vector<int>> fans=permute(v);
        for(int i=0;i<fans.size();i++){
             for(int j=0;j<fans[0].size();j++){
                      cout<<fans[i][j]<<" ";
                    }       
            cout<<endl;
            }
}