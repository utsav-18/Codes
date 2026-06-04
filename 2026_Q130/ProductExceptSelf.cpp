#include<iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>ans;

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