#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v1) {
    for (int x : v1)
        cout << x << " ";
    cout << endl;
}

void merge(vector<int>& v1, vector<int>& v2, int m, int n) {

    int p1 = m - 1;
    int p2 = n - 1;
    int i = m + n - 1;

    while (p2 >= 0) {

        if (p1 >= 0 && v1[p1] > v2[p2]) {
            v1[i--] = v1[p1--];
        }
        else {
            v1[i--] = v2[p2--];
        }
    }
}

int main() {

    vector<int> v1 = {1,2,3,0,0,0};
    vector<int> v2 = {2,5,6};

    merge(v1, v2, 3, 3);

    display(v1);
}