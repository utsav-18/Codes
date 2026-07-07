#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void print(vector<int>&v){
    for(int i:v){
        cout<<i<<" ";
    }cout<<"\n";
}
void rotate(vector<int>&v,int k){
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
}

int main(){
    vector<int>v;
    v={1,2,3,4,5,6,7};
    print(v);
    int k;
    cout<<"Enter k: ";
    cin>>k;
    rotate(v,k);
    print(v);
}