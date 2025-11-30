#include <iostream>
#include <vector>
#include <algorithm>
    using namespace std;

    bool sorting(vector<int> &nums){
        int s=nums.size();
        for(int i=0;i<s-1;i++){
                if(nums[i]>nums[i+1]){
                    return false;
                }
             
        }
        return true;
    }

int main() {
    vector<int>nums;
    nums={1,1,3,4,5};
    cout<<sorting(nums);

}