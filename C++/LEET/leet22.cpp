#include <iostream>
#include <vector>
#include <string>
using namespace std;
    void gene(string s,int open,int close,int n,vector<string> &ans){
        if(close==n){
            ans.push_back(s);
            return;
        }
        if(open<n) {
            gene(s+'(',open+1,close,n,ans);}
        if(close<open) {
            gene(s+')',open,close+1,n,ans);}
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        gene("",0,0,n,ans);
        return ans;

    }

    int main(){
        int n=3;
        vector<string>fin;
        fin=generateParenthesis(n);
        for(int i=0;i<fin.size();i++){
            cout<<fin[i]<<endl;
        }
    }
