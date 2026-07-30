#include <iostream>
using namespace std;

bool isPalindrome(string s){
    string word = "";
    int size = s.length();
    int i=0;

    while(i<size){
        if(isalnum(s[i])){
            word+=tolower(s[i]);
        }
        i++;
    }

    size = word.length();

    for(int i=0;i<size/2;i++){
        if(word[i]!=word[size-i-1]){
            return false;
        }
    }

    return true;

}

int main(){

    cout<<boolalpha;
    string s = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s);

}