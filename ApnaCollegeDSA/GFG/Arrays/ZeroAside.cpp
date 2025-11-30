#include <iostream>
#include <vector>
using namespace std;
void pushZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return;

    int nonZeroIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[nonZeroIndex], arr[i]);
            nonZeroIndex++;
        }
    }
}



int main() {
    vector<int>v;
    v={1, 2, 0, 4, 3, 0, 0, 1};
    int n=v.size();
    pushZerosToEnd(v);
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}