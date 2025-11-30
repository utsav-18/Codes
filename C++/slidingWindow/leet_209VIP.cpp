#include<iostream>
#include<vector>
#include<climits>
    using namespace std;

    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
            int sum=0;
            int len=0;
            int minLen = INT_MAX;

            int i=0,j=0;
            while(j<n){
                sum += nums[j];
                    while(sum>=target){
                        len = j-i+1;
                        minLen=min(minLen,len);
                        sum -= nums[i];
                        i++;
                    }
                    j++;
            }
            if(minLen==INT_MAX) return 0;
            else return minLen;
    }

    int main(){
        int arr[]={1,2,3,1,2,4,3};
        int t = 7;
        int n=sizeof(arr)/sizeof(arr[0]);
        vector<int>v(arr,arr+n);cout<<endl;
        cout<<"Minimum size of subarray having Sum=target is  : "<<minSubArrayLen(n,v);
    }