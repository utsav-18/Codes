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
    ListNode* reverseList(ListNode* head) {
       ListNode* prev = NULL;
       ListNode* curr = head;

       while(curr!=NULL){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev=curr;
        curr=temp;
       }

    return prev;

    }

int main() {

    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);
    ListNode* f = new ListNode(6);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    cout << "List Before: ";
    display(a);

    a=reverseList(a);

    cout << "List After: ";
    display(a);



    return 0;
}