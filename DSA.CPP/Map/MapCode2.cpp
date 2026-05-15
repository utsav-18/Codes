#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Example: count word frequencies with std::map and show utility methods
int main() {
    vector<string> words = {"apple","banana","apple","orange","banana","apple","pear"};

    map<string,int> freq;
    for (const auto &w : words) ++freq[w];

    cout << "Word frequencies:\n";
    for (const auto &p : freq)
        cout << p.first << " -> " << p.second << '\n';

    // Find most frequent word (simple linear scan)
    auto best = max_element(freq.begin(), freq.end(), [](const auto &a, const auto &b){
        return a.second < b.second;
    });
    if (best != freq.end())
        cout << "\nMost frequent: " << best->first << " (" << best->second << ")" << endl;

    // Demonstrate lower_bound / upper_bound
    cout << "\nWords between 'banana' (inclusive) and 'pear' (exclusive):\n";
    for (auto it = freq.lower_bound("banana"); it != freq.lower_bound("pear"); ++it)
        cout << it->first << " : " << it->second << '\n';

    // Erase by iterator
    auto it = freq.find("orange");
    if (it != freq.end()) {
        freq.erase(it);
        cout << "\nAfter erasing 'orange':\n";
        for (const auto &p : freq) cout << p.first << " -> " << p.second << '\n';
    }

    return 0;
}
