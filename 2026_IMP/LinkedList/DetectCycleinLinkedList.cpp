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


 bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(slow!=NULL || fast!=NULL){
            if(fast == NULL || fast->next==NULL){
                return false;
            }
            if(fast == slow){
                return true;
            }
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
        }
        return false;
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
    f->next=c;

    cout<<hasCycle(a);
    
}