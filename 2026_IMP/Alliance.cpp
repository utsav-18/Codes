#include <iostream>
#include <unordered_map>
using namespace std;

int Ascii_number(string s1,string s2){
    unordered_map<char,int>m1;

    for(char c:s1){
        m1[c]++;
    }

    

}

int main(){
    string s1 = "delete";
    string s2 = "leet";
    cout<<Ascii_number(s1,s2);
}