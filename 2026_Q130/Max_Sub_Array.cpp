#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum=0;

        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum = sum + nums[j];
            }
            maxSum = max(sum,maxSum);
        }
        return maxSum;

}

int main(){
    vector<int>nums;
    nums= {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
}
