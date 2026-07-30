#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
using namespace std;

class RandomizedSet {
public:
    vector<int> nums;
    unordered_map<int, int> mp;

    RandomizedSet() {
        srand(time(0));   
    }

    bool insert(int val) {
        if (mp.count(val))
            return false;

        nums.push_back(val);
        mp[val] = nums.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (!mp.count(val))
            return false;

        int index = mp[val];
        int lastElement = nums.back();

        nums[index] = lastElement;
        mp[lastElement] = index;

        nums.pop_back();
        mp.erase(val);

        return true;
    }

    int getRandom() {
        return nums[rand() % nums.size()];
    }

    void display() {
        cout << "Vector: ";
        for (int x : nums)
            cout << x << " ";

        cout << "\nMap:\n";
        for (auto p : mp)
            cout << p.first << " -> " << p.second << endl;

        cout << "\n";
    }
};

int main() {
    RandomizedSet rs;

    cout<<boolalpha;

    cout << "Insert 10: " << rs.insert(10) << endl;
    cout << "Insert 20: " << rs.insert(20) << endl;
    cout << "Insert 30: " << rs.insert(30) << endl;
    cout << "Insert 40: " << rs.insert(40) << endl;

    rs.display();

    cout << "Remove 20: " << rs.remove(20) << endl;

    rs.display();

    cout << "Insert 20 again: " << rs.insert(20) << endl;

    rs.display();

    cout << "Random Element: " << rs.getRandom() << endl;

    return 0;
}