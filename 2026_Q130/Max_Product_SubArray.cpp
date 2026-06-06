#include <iostream>
#include <vector>
#include <climits>
using namespace std;

    int maxProduct(vector<int>& nums) {
        int curPro=1;
        int maxPro=nums[0];

        for(int i=0;i<nums.size();i++){
            if(curPro<0){
                curPro=1;
            }
            curPro*=nums[i];
            maxPro=max(curPro,maxPro);
        }
        return maxPro;
    }

int main(){
    vector<int>nums;
    nums= {2,3,-2,4};
    cout<<maxProduct(nums);
}
