#include <iostream>
#include <vector>
using namespace std;

    // int rob(vector<int>& nums) {
    //     int rob1=0;
    //     int rob2=0;
    //     int maxi=0;
    //     for(int i=0;i<nums.size();i++){
    //         maxi=max(nums[i]+rob1,rob2);
    //         rob1=rob2;
    //         rob2=maxi;
    //     }
    //     return maxi;
    // }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int> dp(n);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }

        return dp[n-1];
    }

    int main(){
        vector<int>nums;
        nums={2,7,9,3,1};
        cout<<rob(nums);
    }