#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
    bool containsDuplicate(vector<int>& nums) {
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
    nums= {1,1,1,3,3,4,3,2,4,2,,5,6,4,6,5,1,2,3,3};
    cout << containsDuplicate(nums) << endl;
    return 0;
}