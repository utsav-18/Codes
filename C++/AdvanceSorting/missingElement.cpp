#include <iostream>
#include <vector>
    using namespace std;

//  /* m1 > */ int missingNumber(vector<int>& nums) {

//         int s=nums.size();
//         vector<bool>check(s+1,false);
//         for(int i=0;i<s;i++){
//             int ele = nums[i];
//             check[ele]=true;
//         }
//         for(int i=0;i<=s;i++){
//             if(check[i]==false) return i;
//         }
//         return 0;        
//     }

// /* M2 */ int missingNumber(vector<int>& nums) {
//         int s=nums.size();
//         int i=0;
//         while(i<s){
//             int correctIdx = nums[i];
//             if(correctIdx == i || nums[i]==s) i++;
//             else swap(nums[i],nums[correctIdx]);
//         }
//         for(int i=0;i<s;i++){
//             if(nums[i]!=i) return i;
//         }
//         return s;
// }
        
        /* M3 */ int missingNumber(vector<int>& nums) {
                 int n=nums.size();
                int actualsum=n*(n+1)/2;
                int sum=0;
                for(int i=0;i<n;i++){
                    sum+=nums[i];
                }
                return actualsum-sum;
        }

    int main() {
        int arr[]={3,2,0};
        int s=sizeof(arr)/sizeof(arr[0]);
        vector<int> v(arr,arr+s);
        cout<<missingNumber(v);
    }