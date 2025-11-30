#include <iostream>
#include <string>
#include <vector>
using namespace std;

   void binary(string s,vector<string> &v,int x){
    if(s.length()==x){
        v.push_back(s);
        return ;
    }
//no consequetive '1' together;
if(s[s.size()-1]=='1'){
    binary(s+'0',v,x);
}
else{
    binary(s+'0',v,x);
    binary(s+'1',v,x);
   }
 }
int main() {
    vector<string>v;
    int n=3;
    binary("",v,n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
