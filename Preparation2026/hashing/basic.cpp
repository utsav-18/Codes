#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
    vector<int>v={1, 7, 11, 2};
    unordered_map<int,int>mp;
    // unordered_set<int>st;
    int target = 9;
    for(int i=0;i<v.size();i++){
        int c = target-v[i];
        if(mp.count(c)){
            cout<<v[mp[c]]<<" "<<v[i];
        }
        mp[v[i]]=i;
    }
}
