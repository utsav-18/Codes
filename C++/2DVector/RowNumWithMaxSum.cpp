#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void sum(vector<vector<int>> &v){
    
int r=v.size();
int c=v[0].size();

vector<int>o;

for(int i=0;i<r;i++){
    int sum=0;
    for(int j=0;j<c;j++){
        sum+=v[i][j];
    }
    o.push_back(sum);
}

int row =o.size();
int max=INT_MIN;
int x;
for(int i=0;i<row;i++){
    if(o[i]>max) {
        max=o[i];
        x=i;
    }
}

cout<<"Max Sum: "<<max<<"\nIs in Row: "<<x+1;


}


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


cout<<"Matrix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
cout<<endl;

sum(v);
//try it in another way
}