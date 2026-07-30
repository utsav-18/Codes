#include <iostream>
#include <vector>
#include <climits>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        int curSum = 0;
        int maxSum = nums[0];
        for(int i=0;i<nums.size();i++){
            if(curSum<0){
                curSum = 0;
            }
            curSum = curSum + nums[i];
            maxSum = max(curSum,maxSum);
        }
        return maxSum;
    }

int main(){
    vector<int>nums;
    nums= {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
}
