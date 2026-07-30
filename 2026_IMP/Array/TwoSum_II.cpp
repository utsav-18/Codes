#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> &nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<right){
        int sum = nums[left]+nums[right];
        if(sum==target){
            return{left+1,right+1};
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return {};
}

void print(vector<int>&nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>nums;
    nums={2,7,11,15};
    int target=9;
    vector<int>ans;
    ans = twoSum(nums,target);
    print(ans);

}