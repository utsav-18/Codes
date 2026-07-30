#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(ListNode* ptr) {
    while (ptr != NULL) {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

ListNode* mergeKLists(vector<ListNode*>& lists) {

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < lists.size(); i++) {
        ListNode* temp = lists[i];

        while (temp != NULL) {
            minHeap.push(temp->val);
            temp = temp->next;
        }
    }

    ListNode* dummy = new ListNode(0);
    ListNode* merge = dummy;

    while (!minHeap.empty()) {
        merge->next = new ListNode(minHeap.top());
        minHeap.pop();
        merge = merge->next;
    }

    return dummy->next;
}

int main() {

    ListNode* a1 = new ListNode(1);
    ListNode* a2 = new ListNode(4);
    ListNode* a3 = new ListNode(7);
    a1->next = a2;
    a2->next = a3;

    ListNode* b1 = new ListNode(2);
    ListNode* b2 = new ListNode(5);
    ListNode* b3 = new ListNode(8);
    b1->next = b2;
    b2->next = b3;

    ListNode* c1 = new ListNode(3);
    ListNode* c2 = new ListNode(6);
    ListNode* c3 = new ListNode(9);
    c1->next = c2;
    c2->next = c3;

    vector<ListNode*> lists;
    lists.push_back(a1);
    lists.push_back(b1);
    lists.push_back(c1);

    ListNode* ans = mergeKLists(lists);

    cout << "Merged List: ";
    display(ans);

    return 0;
}