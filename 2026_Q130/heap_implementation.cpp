#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

int main() {
    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> heap;
    unordered_map<int, int> deleted;

    while(q--) {
        int type;
        cin >> type;

        if(type == 1) {
            int x;
            cin >> x;
            heap.push(x);
        }

        else if(type == 2) {
            int x;
            cin >> x;
            deleted[x]++;
        }

        else if(type == 3) {

            while(!heap.empty() && deleted[heap.top()] > 0) {
                deleted[heap.top()]--;
                heap.pop();
            }

            cout << heap.top() << endl;
        }
    }

    return 0;
}