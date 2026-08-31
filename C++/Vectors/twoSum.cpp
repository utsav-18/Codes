#include <iostream>
#include <vector>

using namespace std;

int main() {

    int x, s, e;

    cout << "Enter array size: ";
    cin >> s;

    vector<int> v;

    for (int i = 0; i < s; i++) {
        cout << "Enter element " << i << ": ";
        cin >> e;
        v.push_back(e);
    }

    cout << "Enter target: ";
    cin >> x;

    for (int i = 0; i < s; i++) {

        for (int j = i + 1; j < s; j++) {

            if (v.at(i) + v.at(j) == x) {
                cout << v.at(i) << " " << v.at(j) << endl;
            }

        }
    }

    return 0;
}