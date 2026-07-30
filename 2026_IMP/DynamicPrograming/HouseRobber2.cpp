#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int rob(vector<int>&v){
int rob1 = 0, rob2 = 0;
int max1 = 0, max2 = 0;
for(int i=0;i<v.size()-1;i++){
    max1=max(rob1+v[i],rob2);
    rob1=rob2;
    rob2=max1;
}
rob1=0;
rob2=0;
for(int i=1;i<v.size();i++){
    max2=max(rob1+v[i],rob2);
    rob1=rob2;
    rob2=max2;
}
return max(max1,max2);

}

int main(){
    vector<int>v;
    v={1, 2, 3, 1};
    cout<<rob(v);
}