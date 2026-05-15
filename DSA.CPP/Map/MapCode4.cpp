#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Map with keys in descending order using std::greater
    map<string,int,greater<string>> m;
    m["apple"] = 2;
    m["banana"] = 1;
    m["cherry"] = 3;

    cout << "Map (keys descending):" << endl;
    for (const auto &p : m)
        cout << p.first << ": " << p.second << endl;

    return 0;
}
