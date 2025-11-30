#include <iostream>
#include <vector>
using namespace std;

//not working; 

    int search(vector<int>& nums,int target){
         int n=nums.size();
         int lo = 0;
         int hi = hi-1;
         if(n==2){
            if(target==nums[0]) return 0;
            else if(target==nums[1]) return 1;
         }
         int pivot = -1;


        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(mid==0) lo=mid+1;
            else if(mid==n-1) hi = mid-1;
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                pivot = mid;
                break;
             }
             else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                pivot = mid+1;
                break;
             }
             else if(nums[mid]>nums[hi]) lo = mid+1;
             else hi = mid-1;
         }


         if(pivot==-1){
             lo=0;
            hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi=mid-1;
                else lo=mid+1;
            }
         }

         if(target>=nums[0] && target<=nums[pivot-1]){
            lo=0;
            hi=pivot-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi=mid-1;
                else lo=mid+1;
            }
         }
         else {
             lo=pivot;
            hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi=mid-1;
                else lo=mid+1;
         }
         
      }
      return -1;
    }
    
    int main(){
        vector<int>v;
        v={6,8,20,28,33,1,3,4};
        int idx=search(v,20);
        cout<<idx;
    }