#include <iostream>
#include <climits>
#include <vector>
using namespace std;

    int lengthOfLIS(vector<int>& nums) {
        vector<int>lis(nums.size(),1);
        int maxi=1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    lis[i] = max(lis[i],1+lis[j]);
                    maxi = max(maxi,lis[i]);
                }
            }
        }
        return maxi;
    }


int main(){
    vector<int>nums;
    nums={10,9,2,5,3,7,101,18};
    cout<<lengthOfLIS(nums);
}