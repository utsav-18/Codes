#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>&v,int k){
    int n=v.size();
    k=k%n;
    for (int i=0;i<k;i++){
        for(int j=i+1;j<n;j++){
            swap(v[i],v[j]);
        }
    }
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            swap(v[i],v[j]);
        }
    }

}
void print(vector<int>&v){
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}

int main(){
    vector<int>v;
    v={1,2,3,4,5,6};

    print(v);
    rotate(v,3);
    print(v);

    
}