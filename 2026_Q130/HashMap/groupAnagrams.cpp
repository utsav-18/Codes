#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string,vector<string>> mp;

    for(string s : strs){
        string key = s;
        sort(key.begin(),key.end());
        mp[key].push_back(s);
    }

    vector<vector<string>> ans;

    for(auto &it:mp){
        ans.push_back(it.second);
    }
    
    return ans;

}

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    cout<<boolalpha;
    vector<vector<string>> ans = groupAnagrams(strs);

    for(int i=0;i<ans.size();i++){
        for(string s : ans[i]){
            cout<<s<<" ";
        }
        cout<<endl;
    }

}
