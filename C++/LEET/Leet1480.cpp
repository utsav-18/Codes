#include <iostream>
#include <vector>
    using namespace std;

    // vector<int> runningSum(vector<int>& nums){
    //         int n = nums.size();
    //         vector<int>run(n);

    //         run[0]=nums[0];

    //         for(int i=1;i<n;i++){
    //             run[i]=nums[i]+run[i-1];
    //         }
    //         return run;
    // } 

        vector<int> runningSum(vector<int>& nums){

            for(int i=1;i<nums.size();i++){
                nums[i]=nums[i]+nums[i-1];
            }
            return nums;
            
    } 

    int main() {
        int arr[]={1,2,3,4,5};
        int s = sizeof(arr)/sizeof(arr[0]);
        vector<int> v(arr,arr+s);
           
           vector<int>sums;
           sums=runningSum(v);

            for(int i=0;i<sums.size();i++){
                cout<<sums[i]<<" ";
            }  
    }