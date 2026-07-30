#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int left = 0;
    int minLen = 0;
    unordered_set<char>st;

    for(int right = 0;right<s.length();right++){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
        st.insert(s[right]);
        minLen = max(minLen,right-left+1);
    }

        return minLen;

}

int main(){
    cout<<lengthOfLongestSubstring("pwwkew");
}