#include <iostream>
#include <climits>
#include <vector>
using namespace std;


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>lis(nums.size(),1);
        int maxi=1;
        for(int i = 0; i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    lis[i] = max(lis[i], 1+ lis[j]);
                    maxi = max(maxi,lis[i]);
                }
            }
        }
        return maxi;
    }
};

int main(){
    vector<int>nums;
    nums={10,7,8,5,16,27,9};
    Solution s;
    cout<<s.lengthOfLIS(nums);


}