#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int MaxSum(vector<int>& nums, int target) {
    int left = 0;
    int sum = 0;
    int minLength = INT_MAX;

    sum += nums[left];
    
    for(int right = 0; right<nums.size();right++){
        sum+=nums[right];
        while(sum>=target){
            minLength = min(minLength,right-left+1);
            sum -= nums[left];
            left++;
        }

    }

    return (minLength==INT_MAX) ? 0 : minLength;

}

int main() {
    vector<int> v = {2,3,1,2,4,3};
    int k = 7;

    cout << MaxSum(v, k);
}