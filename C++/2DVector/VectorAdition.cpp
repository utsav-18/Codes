#include <iostream>
#include <vector>
using namespace std;
int main(){
    int r;cout<<"Enter Row of mat: ";cin>>r;
    

    vector<vector<int>> v;
    
    for(int i=0;i<r;i++){
        vector<int>v1;
        for(int j=0;j<r;j++){
        int e;cout<<"Enter e: ";cin>>e;
        v1.push_back(e);
        }
        v.push_back(v1);
    }

//Mat 1:
cout<<"Matrix 1: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
cout<<endl;

    vector<vector<int>> b;
    
    for(int i=0;i<r;i++){
        vector<int>v2;
        for(int j=0;j<r;j++){
        int el;cout<<"Enter el: ";cin>>el;
        v2.push_back(el);
        }
        b.push_back(v2);
    }

//Mat 2:
cout<<"Matrix 2: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<b[i][j]<<" ";
        }cout<<"\n";
    }
    cout<<endl;

cout<<"Matrix Addition : "<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            v[i][j]=v[i][j]+b[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
cout<<endl;

}