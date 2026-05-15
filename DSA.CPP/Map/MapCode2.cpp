#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string,int> m;
    m["apple"]++;       // apple = 1
    m["banana"] = 1;    // banana = 1
    m["apple"] += 2;    // apple = 3

    cout << "apple: " << m["apple"] << endl;

    cout << "All items:" << endl;
    for (const auto &p : m)
        cout << p.first << ": " << p.second << endl;

    return 0;
}
