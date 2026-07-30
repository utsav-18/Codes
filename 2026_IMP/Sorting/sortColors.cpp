#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0;
    int high = nums.size()-1;
    int mid = 0;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }

}

int main(){
    vector<int>v;
    v = {2,0,2,1,1,0};
    
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;
    
    sortColors(v);

    for(int i : v){
        cout<<i<<" ";
    }

}