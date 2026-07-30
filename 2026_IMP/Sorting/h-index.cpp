#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int h_index(vector<int>&v){
    sort(v.begin(),v.end(),greater<int>());
    int h=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>=i+1){
            h = i+1;
        }
        else{
            break;
        }
    }
    return h;
}



int main(){
    vector<int>v;
    v={3,0,6,1,5};
    cout<<h_index(v);
}