#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {
    int s1 = s.length();
    int s2 = t.length();
    int idx = 0;

    for(int i=0;i<s1;i++){
        bool flag = false;
        for(int j = idx;j<s2;j++){
            if(s[i]==t[j]){
                flag = true;
                idx = j+1;
                break;
            }
        }
        if(!flag){
            return false;
        }

    }

    return true;

}

int main(){
string s = "abc";
string t = "ahbgdc";
cout<<boolalpha;
cout<<isSubsequence(s,t);
}