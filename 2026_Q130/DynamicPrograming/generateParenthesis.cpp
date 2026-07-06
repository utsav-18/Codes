#include <iostream>
#include <vector>
#include <string>
using namespace std;

void backtrack(vector<string>&ans,string cur,int open,int close,int maxi){
    if(cur.size()==maxi*2){
        ans.push_back(cur);
        return;
    }
    if(open<maxi){
        cur.push_back('(');
        backtrack(ans,cur,open+1,close,maxi);
        cur.pop_back();
    }
    if(close<open){
        cur.push_back(')');
        backtrack(ans,cur,open,close+1,maxi);
        cur.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string>ans;
    string cur = "";
    backtrack(ans,cur,0,0,n);
    return ans;
}


int main(){
    vector<string> s = generateParenthesis(3);
    for (string x : s) {
        cout << x << endl;
    }
}