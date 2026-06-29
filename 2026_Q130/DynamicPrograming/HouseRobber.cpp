#include <iostream>
#include <vector>
using namespace std;

    int rob(vector<int>& nums) {
        int rob1=0;
        int rob2=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi = max(rob1+nums[i],rob2);
            rob1=rob2;
            rob2=maxi;
        }
        return maxi;
    }

    int main(){
        vector<int>nums;
        nums={2,4,3,9,11,2};
        cout<<rob(nums);
    }