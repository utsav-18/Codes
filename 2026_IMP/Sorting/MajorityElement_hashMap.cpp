#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int mostFrequent(vector<int>& nums) {
unordered_map<int,int>mp;
    int maxi=0;
    int ans = nums[0];
    for(int num:nums){
        mp[num]++;
        if(mp[num]>maxi){
            maxi = mp[num];
            ans = num;
        }
    }
    return ans;
}

int main() {
    vector<int> v = {1,1,1,1,1,1,0,0,2,3,1,5,6,7,8,9,5,4,1,2,3,6,0,5,6,5,8,8,5};

    cout << mostFrequent(v);
}