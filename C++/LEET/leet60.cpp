#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void permutation(vector<string>&v, string ans,string original){
if(original=="" ){
    v.push_back(ans);
    return;
}

for(int i=0;i<original.length();i++){
    char ch = original[i];
    string left = original.substr(0,i);
    string right = original.substr(i+1);
    permutation(v,ans+ch,left+right);
    }
}


    string getPermutation(int n, int k) {
        vector<string>v;
        string str;
        for(int i=1;i<=n;i++){
            str += to_string(i);
        }
        permutation(v,"",str);
        return v[k-1];
    }
int main() {
    int n=3,k=3;
    string s = getPermutation(n,k);
    cout<<s;
}