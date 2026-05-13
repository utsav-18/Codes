#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    
    // Insert elements
    s.insert(50);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(10);
    s.insert(20);  // Duplicate - won't be added
    
    // Print set (automatically sorted)
    cout << "Set: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << "\n";
    
    // Size
    cout << "Size: " << s.size() << "\n";
    
    // Find element
    if (s.find(30) != s.end()) {
        cout << "30 found\n";
    }
    
    // Erase element
    s.erase(30);
    cout << "After erasing 30: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << "\n";
    
    return 0;
}
