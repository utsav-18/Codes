#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>>v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;

    v1={1,2,3,4,5};
    v2={1,2,3,4,5};
    v3={1,2,3,4,5};
    v4={1,2,3,4,5}; 

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    vector<vector<int>>b(3,vector<int>(4));



    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}