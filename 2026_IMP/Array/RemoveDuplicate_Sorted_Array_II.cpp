#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>&v,int size){
    cout<<"Elements: ";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int removeElement(vector<int>& nums, int val) {
    if(nums.size()<=2){
        return nums.size();
    }
    int k=2;
    for(int i=2;i<nums.size();i++){
        if(nums[i]!=nums[k-2]){
            nums[k++]=nums[i];
        }
    }
    return k;
}

int main(){
vector<int>v;
v={1,1,1,2,2,3 };
cout<<"Size Before: "<<v.size()<<endl;
int sizeBefore = v.size();
print(v,sizeBefore);

int sizeAfter = removeElement(v,2);
cout<<"Size After: "<<sizeAfter<<endl;
print(v,sizeAfter);
}