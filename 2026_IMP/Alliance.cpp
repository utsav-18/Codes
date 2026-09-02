#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

    int minimumDeleteSum(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        // If s2 is empty, delete everything from s1
        for (int i = 1; i <= n; i++) {
            dp[i][0] = dp[i - 1][0] + s1[i - 1];
        }

        // If s1 is empty, delete everything from s2
        for (int j = 1; j <= m; j++) {
            dp[0][j] = dp[0][j - 1] + s2[j - 1];
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                if (s1[i - 1] == s2[j - 1]) {
                    // Characters are same, keep them
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else {
                    // Delete from either s1 or s2
                    dp[i][j] = min(
                        s1[i - 1] + dp[i - 1][j],
                        s2[j - 1] + dp[i][j - 1]
                    );
                }
            }
        }

        return dp[n][m];
    }


int main() {
    string s1 = "delete";
    string s2 = "leet";

    cout << minimumDeleteSum(s1, s2);

    return 0;
}