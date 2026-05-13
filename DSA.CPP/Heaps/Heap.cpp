#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] < heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        int n = static_cast<int>(heap.size());

        while (true) {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int smallest = index;

            if (left < n && heap[left] < heap[smallest]) {
                smallest = left;
            }
            if (right < n && heap[right] < heap[smallest]) {
                smallest = right;
            }

            if (smallest == index) {
                break;
            }

            swap(heap[index], heap[smallest]);
            index = smallest;
        }
    }

public:
    void push(int value) {
        heap.push_back(value);
        heapifyUp(static_cast<int>(heap.size()) - 1);
    }

    void pop() {
        if (heap.empty()) {
            return;
        }

        swap(heap.front(), heap.back());
        heap.pop_back();

        if (!heap.empty()) {
            heapifyDown(0);
        }
    }

    int top() const {
        return heap.front();
    }

    bool empty() const {
        return heap.empty();
    }

    int size() const {
        return static_cast<int>(heap.size());
    }
};

int main() {
    MinHeap heap;

    heap.push(40);
    heap.push(12);
    heap.push(25);
    heap.push(8);
    heap.push(33);

    cout << "Top element: " << heap.top() << endl;

    heap.pop();
    cout << "Top after pop: " << heap.top() << endl;
    cout << "Heap size: " << heap.size() << endl;

    return 0;
}