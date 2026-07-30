#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {
    int f = nums.size()-1;
    for(int i=nums.size()-2;i>=0;i--){
        if(i+nums[i]>=f){
            f=i;
        }
    }
    if(f==0) {return true;}
    else return false;
}


int main(){
    vector<int>v;
    v={2,3,1,1,4};
    cout<<canJump(v);

}