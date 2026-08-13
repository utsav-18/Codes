#include <iostream>
#include <vector>
using namespace std;

class MinStack {
public:

    vector<int> st;
    vector<int> minSt;

    MinStack() {

    }

    void push(int val) {

        st.push_back(val);

        if(minSt.empty()) {
            minSt.push_back(val);
        }
        else {
            minSt.push_back(min(val, minSt.back()));
        }
    }

    void pop() {

        st.pop_back();
        minSt.pop_back();
    }

    int top() {

        return st.back();
    }

    int getMin() {

        return minSt.back();
    }
};

int main() {

    MinStack s;

    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);

    cout << "Top: " << s.top() << endl;
    cout << "Minimum: " << s.getMin() << endl;

    s.pop();

    cout << "After pop:" << endl;
    cout << "Top: " << s.top() << endl;
    cout << "Minimum: " << s.getMin() << endl;

    return 0;
}