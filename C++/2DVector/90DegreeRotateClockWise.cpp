#include <iostream>
#include <vector>
using namespace std;
int main (){

vector<int>v1;
v1={1,2,3};
vector<int>v2;
v2={4,5,6};
vector<int>v3;
v3={7,8,9};
vector<vector<int>>v;
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);

//transpose;

int size=v.size()-1;

for(int i=0;i<=size;i++){
   for(int j=i+1;j<=size;j++){
      int temp=v[i][j];
      v[i][j]=v[j][i];
      v[j][i]=temp;
   }
}

// //revercing 1.1

// for(int i=0;i<4;i++){
//     for(int j=0;j<4/2;j++){    
//         int temp=v[i][3-j];
//        v[i][3-j]=v[i][j];
//        v[i][j]=temp;
//     }
// }

// //revercing 1.2

for(int i=0;i<=size;i++){
int start =0;
int end=size;
while(start<end){
   int temp=v[i][start];
   v[i][start]=v[i][end];
   v[i][end]=temp;
   start++;
   end--;
 }
}

//displaying

for(int i=0;i<=size;i++){
    for(int j=0;j<=size;j++){
       cout<<v[i][j]<<" ";
        }
     cout<<endl;
   }
}