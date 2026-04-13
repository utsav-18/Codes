#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;

    for(int i = 0; i < nums.size(); i++) {
        int rem = target - nums[i];

        if(m.find(rem) != m.end()) {
            return {m[rem], i}; // return immediately
        }

        m[nums[i]] = i;
    }

    return {}; // if no pair found
}

int main() {
    vector<int> nums = {2,4,5,11,4,1,2,5,6,8,7,4,5};

    vector<int> result = twoSum(nums, 7);

    for(int x : result) {
        cout << x << " ";
    }
}