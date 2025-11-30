#include <iostream>
#include <vector>

using namespace std;

int main() {
    int s;
    cout << "Enter array size: ";
    cin >> s;

    vector<int> v;
    vector<int> w;

    for (int i = 0; i < s; i++) {
        int e;
        cout << "Enter element " << i << ": ";
        cin >> e;
        v.push_back(e);
    }

    // for (int i = v.size() - 1; i >= 0; i--) {
    //     w.push_back(v[i]);
    // }

    for(int i=0;i<v.size();i++){
        w.push_back(v[v.size()-1-i]);
    }

    cout << "Reversed array: ";
    for (int i = 0; i < w.size(); i++) {
        cout << w[i] << " ";
    }

    return 0;
}