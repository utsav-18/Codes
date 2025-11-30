#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main() {

vector<string>v1;
vector<int>v2;
v1={"0123","0023","456","00182","940","2901"};

for(int i=0;i<v1.size();i++){
    v2.push_back(stoi(v1[i]));
}
for(int i=0;i<v2.size();i++){
   cout<<v2[i]<<" ";
}
sort(v2.begin(),v2.end());cout<<endl;

cout<<"Maximum number is: "<<v2[v2.size()-1];
}