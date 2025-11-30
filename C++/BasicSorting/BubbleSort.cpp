//increasing 

#include <iostream>
#include <vector>
#include <algorithm>
    using namespace std;

    vector<int> BubblesortOptimised(vector<int> &nums){
        int s=nums.size();
        for(int i=0;i<s-1;i++){
            bool flag = true;
             for(int j=0;j<s-1-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    flag=false;
                }
             }
             if(flag==true) {
                break;
             }
        }
        return nums;
    }

    // vector<int> Bubblesort(vector<int> &nums){
    //     int s=nums.size();
    //     for(int i=0;i<s-1;i++){
    //          for(int j=0;j<s-1-i;j++){
    //             if(nums[j]>nums[j+1]){
    //                 swap(nums[j],nums[j+1]);
    //             }
    //          }
    //     }
    //     return nums;
    // }

int main() {
    vector<int>nums;
    nums={5,4,3,6,2,7,1,0};
    vector<int> ans;
    ans=BubblesortOptimised(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}