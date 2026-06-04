#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums,int target){
    unordered_map<int,int>m;
    for(int i=0;i<nums.size();i++){
         int complement = target - nums[i];
         if(m.find(complement)!=m.end()){
            return{m[complement],i};
         }
         m[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {0, 7, 11, 15,1,2,3,4,5};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}