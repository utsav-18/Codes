#include <iostream>
#include <vector>
using namespace std;
int main() {

  int r;cout<<"Enter Row of mat: ";cin>>r;
  if(r%2==0) r--;
    
     vector<vector<int>> v;
    
    for(int i=0;i<r;i++){
        vector<int>v1;
        for(int j=0;j<r;j++){
        int e;cout<<"Enter e: ";cin>>e;
        v1.push_back(e);
        }
        v.push_back(v1);
    }


cout<<"Formed Matrix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
cout<<endl;

cout<<"Desired design: \n";
for(int i=0;i<r;i++){
    for(int j=0;j<r;j++){
        if(i==j || i+j==r-1)   cout<<v[i][j]<<" ";
        else cout<<"  ";
    }cout<<endl;
}


}