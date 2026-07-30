#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// bool canConstruct1(string ransomNote, string magazine) {
//     vector<char>freq(26,0);
//     for(char c:magazine){
//         freq[c-'a']++;
//     }
//     for(char c:ransomNote){
//         freq[c-'a']--;

//         if(freq[c-'a']<0){
//             return false;
//         }
//     }

//     return true;
// }

bool canConstruct2(string ransomNote, string magazine) {
    unordered_map<char,int>mp;

    for(char c:magazine){
        mp[c]++;
    }
    for(char c:ransomNote){
        if(mp[c]==0){
            return false;
        }
        mp[c]--;
    }

    return true;
}

int main(){
    string a = "aa";
    string b = "aab";
    cout<<boolalpha;
    cout<<canConstruct2(a,b);
}

