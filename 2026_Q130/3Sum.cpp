#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void twosum2(vector<int>&nums,int i,vector<vector<int>>&ans){
        int left =  i+1;
        int right = nums.size()-1;
        while(left<right){
            int sum = nums[i]+nums[left]+nums[right];
            if(sum<0){
                left++;
            }
            else if(sum>0){
                right--;
            }
            else {
            ans.push_back({nums[i], nums[left], nums[right]});

            left++;
            right--;

            while(left < right && nums[left] == nums[left - 1])
                left++;

            while(left < right && nums[right] == nums[right + 1])
                right--;
        }

    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size() && nums[i]<=0;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                twosum2(nums,i,ans);
            }
        }
        return ans;
    }




int main(){

    vector<int>nums;
    nums={-1,0,1,2,-1,-4};
    vector<vector<int>>ans;
    ans=threeSum(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}