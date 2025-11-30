#include <iostream>
#include <vector>
    using namespace std;

    // vector<int> productExceptSelf(vector<int>& nums) {
    //     int n = nums.size();
    //      vector<int> pre(n);
    //      vector<int> suf(n);
    //        //prefix product array
    //      int p = nums[0];
    //        pre[0]=1;
    //        for(int i=1;i<n;i++){
    //           pre[i] = p;
    //           p *= nums[i];
    //         }
    //        // suffix product array
    //         p = nums[n-1];
    //         suf[n-1] = 1;
    //         for(int i=n-2;i>=0;i--){
    //             suf[i] = p;
    //             p *= nums[i];
    //         }
    //         //pre[i] = pre[i]*suf[i];
    //         for(int i=0;i<n;i++){
    //             pre[i] = pre[i]*suf[i];
    //         }

    //     return ans;
    // }
            vector<int> productExceptSelf(vector<int>& nums) {
                int n = nums.size();
                vector<int>pre(n);
                int p = nums[0];
                pre[0] = 1;

                    for(int i=1;i<n;i++){
                        pre[i] = p;
                        p *= nums[i];
                    }
                     p = nums[n-1];
                    for(int i = n-2;i>=0;i--){
                        pre[i] *= p ;
                        p *= nums[i];
                    }
                return pre;
        }

    int main() {
        int arr[]={1,2,3,4};
        int s= sizeof(arr)/sizeof(arr[0]);
        vector<int> nums(arr,arr+s);
        vector<int> ans;
        ans = productExceptSelf(nums);
        for(int i=0;i<s;i++){
            cout<<ans[i]<<" ";
        }
    }