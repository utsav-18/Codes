#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int mostFrequent(vector<int>& nums) {
    unordered_map<int, int> mp;

    int maxFreq = 0;
    int ans = nums[0];

    for (int num : nums) {
        mp[num]++;

        if (mp[num] > maxFreq) {
            maxFreq = mp[num];
            ans = num;
        }
    }

    return ans;
}

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,1};

    cout << mostFrequent(v);
}