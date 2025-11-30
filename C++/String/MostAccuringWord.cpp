#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {

vector<string>v; //string vector;

    string str;cout<<"Enter a string: ";getline(cin,str);
    stringstream ss(str);
    string temp;
    
    while(ss>>temp){
        v.push_back(temp);
    }

//sorting

sort(v.begin(),v.end());

int count=1;
int mxcount=1;

for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]){count++;}
    else {count=1;}
    mxcount=max(mxcount,count);  //maximum between two;
}
count=1;

for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]){
        count++;    
        }
    else {
        count=1;
        }
    if(count==mxcount){
        cout<<v[i]<<" "<<mxcount<<endl;
    }
}

}