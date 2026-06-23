#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {

    vector<bool> dp(s.length() + 1, false);
    dp[0] = true;

    unordered_set<string> wordSet(wordDict.begin(), wordDict.end());

    for (int i = 1; i <= s.length(); i++) {

        for (int j = i - 1; j >= 0; j--) {

            if (dp[j] &&
                wordSet.count(s.substr(j, i - j))) {

                dp[i] = true;
                break;
            }
        }
    }

    return dp[s.length()];
}

int main() {

    string s = "leetcode";

    vector<string> wordDict = {
        "leet",
        "code"
    };

    if (wordBreak(s, wordDict))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}