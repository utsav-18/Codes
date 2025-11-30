#include <iostream>
#include <vector>
using namespace std;

void vctr(vector<int>&v, int l){
    if(l==v.size()) return;
    cout<<v[l]<<" ";
    vctr(v,l+1);
}

void array(int *arr,int i,int l){
if(l>i) return;
    cout<<arr[l]<<" ";
    array(arr,i,l+1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int s=5;
    array(arr,s-1,0);
cout<<endl;
    vector<int>v(s,1);
    vctr(v,0);


}