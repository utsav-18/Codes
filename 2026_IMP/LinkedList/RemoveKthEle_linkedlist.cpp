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

void dis(ListNode * root){
    while(root!=NULL){
        cout<<root->val<<" ";
        root=root->next;
    }
    cout<<endl;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    dummy->next=head;

    ListNode* temp = dummy;

    int size=0;
    while(head!=NULL){
        size++;
        head=head->next;
    }
    int pos = size-n;

    while(pos--){
        temp=temp->next;
    }

    temp->next = temp->next->next;

    return dummy->next;

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

    dis(a);
    removeNthFromEnd(a,4);
    dis(a);
}