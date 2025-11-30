#include <iostream>
#include <vector>
#include <climits>
using namespace std;
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){count++;}
            }
            if(count>n/2) return nums[i];
        }
        return -1;

    }
    int main() {
        vector<int>x;
        x={3,2,3};
        cout<<majorityElement(x);
    }