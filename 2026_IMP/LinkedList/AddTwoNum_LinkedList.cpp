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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* result = new ListNode(0);
    ListNode* ptr = result;

    int carry = 0;

    while (l1 != NULL || l2 != NULL) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum = sum % 10;

        ptr->next = new ListNode(sum);
        ptr = ptr->next;
    }

    if (carry == 1) {
        ptr->next = new ListNode(1);
    }

    return result->next;
}

int main() {

    ListNode* a = new ListNode(20);
    ListNode* b = new ListNode(40);
    ListNode* c = new ListNode(30);

    a->next = b;
    b->next = c;

    ListNode* d = new ListNode(5);
    ListNode* e = new ListNode(6);
    ListNode* f = new ListNode(4);

    d->next = e;
    e->next = f;

    cout << "List 1: ";
    display(a);

    cout << "List 2: ";
    display(d);

    ListNode* ans = addTwoNumbers(a, d);

    cout << "Result: ";
    display(ans);

    return 0;
}