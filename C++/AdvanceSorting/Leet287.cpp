#include <iostream>
#include <vector>
    using namespace std;

    int findDuplicate (vector<int>& nums){
        int n=nums.size();
        int i=0;
        while(i<n){
            int CI = nums[i];
            if(nums[CI]==nums[i]) return nums[i];
            else swap(nums[CI],nums[i]);
        }
        return 0;
            }

            int main() {
                int arr[]={2,3,6,1,7,6,5,8};
                int s=sizeof(arr)/sizeof(arr[0]);
                vector<int> v(arr,arr+s);
                cout<<findDuplicate(v);

            }