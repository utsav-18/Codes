#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
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

    ListNode* sortList(ListNode* head) {
        if (head == NULL) return head;

        vector<int> v;
        ListNode* temp = head;

        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        int i=0;
        temp = head;

        while(temp!=NULL){
            temp->val = v[i++];
            temp=temp->next;
        }
        return head;
    }

int main() {
    ListNode* a = new ListNode(4);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(0);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(3);
    ListNode* f = new ListNode(9);
    ListNode* g = new ListNode(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;

    display(a);
    sortList(a);
    display(a);

    return 0;
}