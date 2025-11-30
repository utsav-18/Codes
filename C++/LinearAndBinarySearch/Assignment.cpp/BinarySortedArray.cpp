#include <iostream>
#include <vector>
using namespace std;
  
  int Last(vector<int> &nums){
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
                if(nums[mid]==1 && nums[mid-1]!=1) return nums.size()-mid;
                 else if(nums[mid]==0) lo=mid+1;
                 else hi= mid-1;
        }
      
  }
  
    int main() {
        vector<int> v;
        // 1 2 3 4 5 6 
        v={0,0,0,0,1,1};
        cout<<"No of one: "<<Last(v);
    }

