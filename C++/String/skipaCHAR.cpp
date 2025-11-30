#include <iostream>
#include <string>
using namespace std;
int main() {

    string s="aman";//remove 'a';

    for(int i=0;i<s.size();i++){
        if(s[i]!='a') s[i]=s[i];
        else s[i]='\0';
    }

cout<<s;

}