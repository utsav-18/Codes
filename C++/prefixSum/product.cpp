#include <iostream>
#include <vector>
    using namespace std;
       
       //It will not work when array have an element = 0;
       
    //     vector<int> productExceptSelf(vector<int>& nums) {
    //     vector<int>ans(nums.size());
    //     int p=1;
    //     for(int i=0;i<nums.size();i++){
    //        p=p*nums[i] ;
    //     }
    //     for(int i=0;i<nums.size();i++){
    //         ans[i]=p/nums[i];
    //     }
    //     return ans;
    // }

        vector<int> productExceptSelf(vector<int>& nums) {
                int n = nums.size();
                int product = 1;
                int p2 = 1;
                int noz = 0;
                    for(int i=0;i<n;i++){
                        if(nums[i]==0) noz++;
                          product *= nums[i];
                        if(nums[i]!=0) p2 *= nums[i];
                    }  
                        if(noz>1) p2=0;
                            for(int i=0;i<n;i++){
                                if(nums[i]==0) nums[i] = p2;
                                else nums[i] = product / nums[i];
                            }
                    return nums;
        }

    int main() {
        int arr[]={-1,1,0,-3,3};
        int s= sizeof(arr)/sizeof(arr[0]);
        vector<int> nums(arr,arr+s);
        vector<int> ans;
        ans = productExceptSelf(nums);

        for(int i=0;i<s;i++){
            cout<<ans[i]<<" ";
        }
    }