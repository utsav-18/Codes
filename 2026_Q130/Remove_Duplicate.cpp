#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
        }
        return count;
    }

int main(){
    vector<int> nums;
    nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);
    return 0;
}