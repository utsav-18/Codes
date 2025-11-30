#include <iostream>
#include <vector>

using namespace std;
 
void subArray(int arr[],vector<int>v,int size,int idx){
if(idx==size){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
    return;
}
        subArray(arr,v,size,idx+1);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subArray(arr,v,size,idx+1);
    }
}
int main(){
int arr[]={1,2,3,4};
int size=sizeof(arr)/sizeof(arr[0]);
vector<int>v;
subArray(arr,v,size,0);
}