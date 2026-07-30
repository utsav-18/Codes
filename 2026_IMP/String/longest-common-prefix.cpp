#include <iostream>
#include <vector>
using namespace std;

string LongestCommonPrefix(vector<string>& s) {
    string ans = "";

    for (int i = 0; i < s[0].size(); i++) {
        char ch = s[0][i];

        for (int j = 1; j < s.size(); j++) {
            if (i >= s[j].size() || s[j][i] != ch) {
                return ans;
            }
        }

        ans.push_back(ch);
    }

    return ans;
}

int main() {
    vector<string> s = {"flower", "flow", "flight"};

    cout << LongestCommonPrefix(s);

    return 0;
}