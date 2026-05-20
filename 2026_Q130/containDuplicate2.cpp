#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
    bool containsDuplicate(vector<int>& nums,int k) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])){
                return true;
            }
            s.insert(nums[i]);
            if(i>=k){
                s.erase(nums[i-k]);
            }
        }
        return false;
    }

int main(){
    vector<int> nums;
    int k;

    nums= {1,1,1,3,3,4,3,2,4,2,4,5,6,2,3,1,0,1,2,3,3};
    k = 3;
    cout << containsDuplicate(nums,k) << endl;
    return 0;
}