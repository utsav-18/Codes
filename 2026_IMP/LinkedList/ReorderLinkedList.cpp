#include <iostream>
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

void reorderList(ListNode* head) {

    if (head == NULL || head->next == NULL) return;

    // Find middle
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split into two halves
    ListNode* second = slow->next;
    slow->next = NULL;

    // Reverse second half
    ListNode* prev = NULL;
    ListNode* curr = second;
    ListNode* temp;

    while (curr != NULL) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    second = prev;

    // Merge both halves
    ListNode* first = head;

    while (second != NULL) {
        ListNode* temp1 = first->next;
        ListNode* temp2 = second->next;

        first->next = second;
        second->next = temp1;

        first = temp1;
        second = temp2;
    }
}

int main() {

    ListNode* a = new ListNode(10);
    ListNode* b = new ListNode(20);
    ListNode* c = new ListNode(30);
    ListNode* d = new ListNode(40);
    ListNode* e = new ListNode(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << "Original List: ";
    display(a);

    reorderList(a);

    cout << "Reordered List: ";
    display(a);

    return 0;
}