#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

    int raceCar(int target, vector<int>& dp) {
        if (dp[target] >= 0) {
            return dp[target];
        }

        dp[target] = INT_MAX;

        int x = 1, j = 1;

        for (; j < target; j = (1 << ++x) - 1) {

            int q = 0, p = 0;

            while (p < j) {
                dp[target] = min(dp[target],
                                 x + 2 + q + raceCar(target - (j - p), dp));

                p = (1 << ++q) - 1;
            }
        }

        dp[target] = min(dp[target],
                         x + (target == j ? 0 : 1 + raceCar(j - target, dp)));

        return dp[target];
    }


int racecar(int target) {
        vector<int> dp(target + 1, -1);
        dp[0] = 0;
        return raceCar(target, dp);
    }


int main() {
    int target = 6;
    cout <<racecar(target);
    return 0;
}
