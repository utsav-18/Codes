// Written by me

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    int c = 0;

    cout << "Original: ";

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << "\n";

    // Sorting 0s and 1s
    for (int i = 0; i < v.size(); i++) {

        if (v[i] == 0) {

            swap(v[i], v[c]);
            c++;
        }
    }

    cout << "Sorted:   ";

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << "\n";

    return 0;
}