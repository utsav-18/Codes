#include <bits/stdc++.h>
using namespace std;

int main() {
    
    set<int> s;
    
    // 1. Insert elements
    s.insert(50);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(10);
    s.insert(20);  
    
    cout << "Set after insertions: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << "\n\n";  
    
    // 2. Size and empty check
    cout << "Size of set: " << s.size() << "\n";
    cout << "Is set empty? " << (s.empty() ? "Yes" : "No") << "\n\n";
    
    // 3. Find element (returns iterator)
    if (s.find(30) != s.end()) {
        cout << "Element 30 found!\n";
    } else {
        cout << "Element 30 not found!\n";
    }
    
    if (s.find(100) != s.end()) {
        cout << "Element 100 found!\n";
    } else {
        cout << "Element 100 not found!\n";
    }
    cout << "\n";
    
    // 4. Erase element
    s.erase(30);
    cout << "After erasing 30: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << "\n\n";
    
    // 5. Lower bound and upper bound
    cout << "Lower bound of 25: " << *s.lower_bound(25) << " (smallest >= 25)\n";
    cout << "Upper bound of 25: " << *s.upper_bound(25) << " (smallest > 25)\n\n";
    
    // 6. Count (0 or 1 for set)
    cout << "Count of 20: " << s.count(20) << "\n";
    cout << "Count of 100: " << s.count(100) << "\n\n";
    
    // 7. Clear set
    // s.clear();
    
    // ==================== SET WITH STRINGS ====================
    cout << "===== SET WITH STRINGS =====\n";
    set<string> fruits;
    fruits.insert("apple");
    fruits.insert("banana");
    fruits.insert("cherry");
    fruits.insert("apple");  // Duplicate
    
    for (auto fruit : fruits) {
        cout << fruit << " ";
    }
    cout << "\n\n";
    
    // ==================== UNORDERED SET ====================
    cout << "===== UNORDERED SET (Faster, but unsorted) =====\n";
    unordered_set<int> us;
    us.insert(50);
    us.insert(30);
    us.insert(20);
    us.insert(40);
    
    cout << "Unordered set: ";
    for (int x : us) {
        cout << x << " ";  // Order is NOT guaranteed
    }
    cout << "\n\n";
    
    // ==================== MULTISET ====================
    // MultiSet: Sorted, but ALLOWS duplicates
    cout << "===== MULTISET (Sorted with Duplicates) =====\n";
    multiset<int> ms;
    ms.insert(50);
    ms.insert(30);
    ms.insert(20);
    ms.insert(30);  // Duplicate IS allowed
    ms.insert(20);
    
    cout << "Multiset: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << "\n\n";
    
    cout << "Count of 30 in multiset: " << ms.count(30) << "\n";
    cout << "Count of 20 in multiset: " << ms.count(20) << "\n\n";
    
    // ==================== SET OPERATIONS ====================
    cout << "===== SET OPERATIONS =====\n";
    set<int> setA = {1, 2, 3, 4, 5};
    set<int> setB = {4, 5, 6, 7, 8};
    
    cout << "Set A: ";
    for (int x : setA) cout << x << " ";
    cout << "\nSet B: ";
    for (int x : setB) cout << x << " ";
    cout << "\n\n";
    
    // Union (manual)
    cout << "Union of A and B: ";
    for (int x : setA) cout << x << " ";
    for (int x : setB) {
        if (setA.find(x) == setA.end()) cout << x << " ";
    }
    cout << "\n";
    
    // Intersection
    cout << "Intersection of A and B: ";
    for (int x : setA) {
        if (setB.find(x) != setB.end()) cout << x << " ";
    }
    cout << "\n\n";
    
    // ==================== ITERATORS ====================
    cout << "===== ITERATORS =====\n";
    set<int> s2 = {10, 20, 30, 40, 50};
    
    // Forward iteration
    cout << "Forward: ";
    for (auto it = s2.begin(); it != s2.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
    
    // Reverse iteration
    cout << "Reverse: ";
    for (auto it = s2.rbegin(); it != s2.rend(); ++it) {
        cout << *it << " ";
    }
    cout << "\n\n";
    
    // ==================== PRACTICAL EXAMPLE ====================
    // Find unique elements and count occurrences
    cout << "===== PRACTICAL EXAMPLE: UNIQUE ELEMENTS =====\n";
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6};
    set<int> unique_elements(arr.begin(), arr.end());
    
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
    
    cout << "Unique elements: ";
    for (int x : unique_elements) cout << x << " ";
    cout << "\n";
    cout << "Count of unique elements: " << unique_elements.size() << "\n";
    
    return 0;
}
