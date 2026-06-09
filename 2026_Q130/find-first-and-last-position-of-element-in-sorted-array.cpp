#include <iostream>
#include <vector>
using namespace std;

    int fpose(vector<int>&nums,int target){
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                ans=mid;
                right = mid-1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return ans;
    }

    int lpose(vector<int>&nums,int target){
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                ans=mid;
                left = mid+1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {fpose(nums,target),lpose(nums,target)};
    }

int main(){
    vector<int> nums;
    nums = {5,7,7,8,8,10};
    vector<int>ans;
    int target = 8;
    ans=searchRange(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
