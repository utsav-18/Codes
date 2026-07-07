#include <iostream>
#include <vector>

using namespace std;
void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for (int i = 0; i < nums.size();i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            } 
        }

        return k;
    }

int main(){
vector<int>v;
v={1,2,3,4,3,2,1,2,3,4,3,2,1};
print(v);
cout<<removeElement(v,2);cout<<endl;
print(v);
}