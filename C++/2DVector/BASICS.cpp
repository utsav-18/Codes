#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<vector<int>>v1(3,vector<int>(4));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v1[i][j]<<" ";
        }cout<<endl;
    }
cout<<"No of columns: "<<v1[0].size()<<endl;

    vector<vector<int>>v2(3,vector<int>(5,1));
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<v2[i][j]<<" ";
        }cout<<endl;
    }

cout<<"No of columns: "<<v2[0].size()<<endl;

}