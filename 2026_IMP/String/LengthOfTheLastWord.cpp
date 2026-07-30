#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
    int k=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]==' '){
            if(k>0){
                break;
            }
        }
        else{
            k++;
        }
    }
    return k;
}

int main(){
    string s;
    s="luffy is still joyboy   ";
    cout<<lengthOfLastWord(s);
}