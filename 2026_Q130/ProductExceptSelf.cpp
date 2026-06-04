#include<iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>ans(nums.size(),1);
    int pre=1,post=1;
    for(int i=0;i<nums.size();i++){
        ans[i]=pre;
        pre=pre*nums[i];
    }
    for(int i=nums.size()-1;i>=0;i--){
        ans[i]=ans[i]*post;
        post = post*nums[i];
    }
    return ans;
}
void print(vector<int>& vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
        cout<<endl;
}
int main(){
    vector<int>v;
    v={1,2,3,4};
    print(v);
    vector<int>pro;
    pro = productExceptSelf(v);
    print(pro);
}