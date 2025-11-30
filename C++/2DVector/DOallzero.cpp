//make all elements zero of same row and cols where zero is already present 
#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int>v1;
v1={1,1,1};
vector<int>v2;
v2={1,1,1};
vector<int>v3;
v3={1,1,0};
vector<vector<int>>v;
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);

int x,y;
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[0].size();j++){
        if(v[i][j]==0){ 
            x=i;y=j;
     }
    }
}

// for(int i=0;i<v.size();i++){
//     for(int j=0;j<v[0].size();j++){
//         v[x][j]=0;
//         v[i][y]=0;
//     }
// }

int i=0,j=0;
while(i<v.size() && j<v[0].size()){
        v[x][j]=0;
        v[i][y]=0;
        i++;
        j++;
}

for(int i=0;i<v.size();i++){
    for(int j=0;j<v[0].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

}
