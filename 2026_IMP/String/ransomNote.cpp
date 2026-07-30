#include <iostream>
#include <vector>
using namespace std;

    bool canConstruct(string ransomNote, string magazine) {

        vector<int> freq(26, 0);

        for(char c : magazine){
            freq[c - 'a']++;
        }

        for(char c : ransomNote){
            freq[c - 'a']--;
            if(freq[c - 'a'] < 0)
                return false;
        }

        return true;
    }

int main(){
    string s1 ="aab";
    string s2 ="baa";
    cout<<boolalpha;
    cout<<canConstruct(s1,s2);
}