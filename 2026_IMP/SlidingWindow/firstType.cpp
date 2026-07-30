#include <iostream>
#include <vector>
using namespace std;

int MaxSum(vector<int>& v, int k) {
    int sum = 0;

    // First window
    for (int i = 0; i < k; i++) {
        sum += v[i];
    }

    int maxSum = sum;

    // Slide the window
    for (int i = k; i < v.size(); i++) {
        sum = sum - v[i - k] + v[i];
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int main() {
    vector<int> v = {1,2,3,4,5,6,4,5,6,2,1,3,1,0,2,5,8};
    int k = 3;

    cout << MaxSum(v, k);
}