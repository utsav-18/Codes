#include <iostream>
#include <vector>
using namespace std;

    int search(vector<int>&nums,int target){
            int lo=0;
            int hi=nums.size()-1;
            while(lo<=hi){
                int mid = lo+(hi-lo)/2;
                if(nums[mid] == target) return mid;
                else if(nums[mid]>target) hi = mid-1;
                else lo = mid+1;
            }
            return -1;
    }
    int main(){
        vector<int>v;
        v={1,2,3,4,5,6,7,8,9};
        int t=6;
        int idx=search(v,t);
        cout<<"Ans: "<<idx; 
    }