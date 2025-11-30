#include <iostream>
#include <vector>
using namespace std;
  
  int Last(vector<int> &nums,int x){
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
                if(nums[mid]==x && nums[mid+1]!=x) return mid;
                else if(nums[mid]<=x) lo=mid+1;
                else hi=mid-1;
        }
        return -1;
  }
  
    int main() {
        vector<int> v;
        v={1,2,3,3,4,4,4,5};
        int x;cout<<"Enter target: ";cin>>x;
        cout<<Last(v,x);
    }

