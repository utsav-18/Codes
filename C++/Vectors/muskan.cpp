#include<iostream>
#include<vector>
using namespace std;
void reversee(vector<int>& nums){

    for(int i=0;i<nums.size();i++){

    if(i==(nums.size()/2)) break;

    int temp =nums[nums.size()-1-i];
    nums[nums.size()-1-i]=nums[i];
    nums[i]=temp;

    }
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    reversee(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}