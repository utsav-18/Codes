#include<iostream>
#include<vector>
using namespace std;
    
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i+1<n && nums[i]<nums[i+1]) i++;
        if(i==0||i==n-1) return false;

        int p=i;
        while(i+1<n && nums[i]>nums[i+1]) i++;
        if(i==p || i==n-1) return false;

        int q=i;
        while(i+1<n && nums[i]<nums[i+1]) i++;

        if(i==n-1) return true;
        else return false;
    }

int main(){
    vector<int>nums;
    nums = {1,2,3,5,4,6};
    cout<<isTrionic(nums);
}