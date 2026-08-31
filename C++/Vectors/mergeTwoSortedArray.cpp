#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int>& v1, vector<int>& v2) {

    int n = v1.size();
    int m = v2.size();

    vector<int> res(m + n);

    int i = 0; // v1
    int j = 0; // v2
    int k = 0; // res

    // Merge while both arrays have elements
    while (i < n && j < m) {

        if (v1[i] < v2[j]) {
            res[k] = v1[i];
            i++;
        }
        else {
            res[k] = v2[j];
            j++;
        }

        k++;
    }

    // Remaining elements of v1
    while (i < n) {
        res[k] = v1[i];
        i++;
        k++;
    }

    // Remaining elements of v2
    while (j < m) {
        res[k] = v2[j];
        j++;
        k++;
    }

    return res;
}

int main() {

    vector<int> arr1;

    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    arr1.push_back(9);

    vector<int> arr2;

    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    arr2.push_back(13);

    vector<int> v = merge(arr1, arr2);

    cout << "Merged sorted Array: ";

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}