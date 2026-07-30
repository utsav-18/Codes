#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {

    if(s.length()!=t.length()){
        return false;
    }

    unordered_map<char,int> mp;

    for(char c:s){
        mp[c]++;
    }

    for(char c:t){
        if(!mp.count(c)){
            return false;
        }
        else{
            mp[c]--;
        }
        if(mp[c]==0){
            mp.erase(c);
        }
    }

    return true;
}

int main(){
string a = "anagram";
string b = "nagaram";
cout<<boolalpha;
cout<<isAnagram(a,b);
}