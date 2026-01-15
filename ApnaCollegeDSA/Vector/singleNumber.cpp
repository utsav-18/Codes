#include <iostream>
#include <vector>
using namespace std;

    // int singleNumber(vector<int>& nums) {
    //   int n = nums.size();
    //   if(n==1) return nums[0];

    //   for(int i=0;i<n;i++){
    //           int c=0;
    //     for(int j=0;j<n;j++){
    //         if(nums[i]==nums[j]){
    //             c++;
    //         }
    //     }
    //     if(c==1) return nums[i];
    //   }  
    //   return -1;
    // }

    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            ans^=i;
        }
        return ans;
    }
    

int main(){
    vector<int>nums;
    nums={2,2,1};
    cout<<singleNumber(nums)<<endl;
    vector<int>arr;
    arr={4,1,2,1,2};
    cout<<singleNumber(arr)<<endl;

}