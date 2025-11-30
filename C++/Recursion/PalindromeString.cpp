#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s,int i,int j){
    if(i>j) return true;

    if(s[i]!=s[j]) {
        return false;
    }
    else return isPalindrome(s,i+1,j-1);
}

int main() {
string s="racecar";

bool flag=isPalindrome(s,0,s.length()-1);
if(flag==true){cout<<"Its a palindrome";}
else {cout<<"Its not a palindrome";}
}