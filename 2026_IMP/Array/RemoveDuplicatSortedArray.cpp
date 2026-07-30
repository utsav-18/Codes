#include <iostream>
#include <vector>
using namespace std;

int remove(vector<int>&nums){
    int k=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[k-1]){
            nums[k++]=nums[i];
        }
    }
    return k;
}

int main(){
    vector<int>v;
    v={0,0,1,1,2,3,4,5,6,6,7,7,8};
    cout<<"Size Before: "<<v.size()<<" "<<endl;
    cout<<"Size After: "<<remove(v);
}