#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool containsDuplicate(vector<int>&nums){
    unordered_set<int>s;
    for(int i=0;i<nums.size();i++){
        if(s.find(nums[i])!=s.end()){
            return true;
        }
        s.insert(nums[i]);
    }
    return false;
}


int main(){
    vector<int> nums;
    nums= {1,2,3,4,5,6,7,8,9,1};
    int ans = containsDuplicate(nums);
    if(ans!=0) cout<<"Found!!";
    else cout<<"Not Found!";
    return 0;
}