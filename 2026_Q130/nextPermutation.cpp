#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    void nextPermutation(vector<int>& nums) {

        int i = nums.size() - 2;

        // Step 1: Find the first decreasing element from the right
        while (i >= 0 && nums[i + 1] <= nums[i]) {
            i--;
        }

        // Step 2: If such an element exists
        if (i >= 0) {
            int j = nums.size() - 1;

            // Find the next greater element from the right
            while (nums[j] <= nums[i]) {
                j--;
            }

            swap(nums[i], nums[j]);
        }

        // Step 3: Reverse the suffix
        reverse(nums.begin() + i + 1, nums.end());
    }

void print(vector<int>&nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>nums;
    nums={1,2,3,5,4,4,5};
    print(nums);
    nextPermutation(nums);
    print(nums);
}