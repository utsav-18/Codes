#include<iostream>
#include<vector>
#include<queue>
using namespace std;


    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int ans = nums[0];

        while(left <= right) {

            if(nums[left] <= nums[right]) {
                ans = min(ans, nums[left]);
                break;
            }

            int mid = left + (right - left) / 2;

            ans = min(ans, nums[mid]);

            if(nums[left] <= nums[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }


int main(){
    vector<int>nums;
    nums={3,4,5,1,2};
    cout<<findMin(nums);
}