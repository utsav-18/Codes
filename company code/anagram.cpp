#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<string> removeAnagrams(vector<string>& words) {

    unordered_map<string, int> freq;
    vector<string> ans;

    for(string c : words){
        string key = c;
        sort(key.begin(),key.end());
        freq[key]++;
    }

    for(string c : words){
        string key = c;
        sort(key.begin(),key.end());
        if(freq[key]==1){
            ans.push_back(c);
        }
        
    }

    return ans;
}

int main() {

    vector<string> words = {
        "one", "two", "neo", "owt", "three", "four"
    };

    vector<string> ans = removeAnagrams(words);

    for (string s : ans) {
        cout << s << " ";
    }

    return 0;
}