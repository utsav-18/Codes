#include <iostream>
#include <vector>
using namespace std;
  
  int find(vector<int> &nums,int x){
        int lo=0;
        int hi=nums.size()-1;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==x) return mid;
            else if(nums[mid]>x) lo=mid+1;
            else hi=mid-1;
    }
        return -1;  
  }
  
    int main() {
        vector<int> v;
        v={8,7,6,5,4,3,2,1};
        cout<<"Idx: "<<find(v,7);
    }

