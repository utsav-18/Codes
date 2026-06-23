#include <iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(ListNode* root){

    while(root!=NULL){
        cout<<root->val<<" ";
        root=root->next;
    }
    cout<<endl;
}

    ListNode* reverseLinkedList(ListNode* head, int k) {

        ListNode* newHead = nullptr;
        ListNode* ptr = head;

        while (k > 0) {

            ListNode* nextNode = ptr->next;
            ptr->next = newHead;
            newHead = ptr;
            ptr = nextNode;

            k--;
        }

        return newHead;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* ptr = head;
        ListNode* ktail = nullptr;
        ListNode* newHead = nullptr;

        while (ptr != nullptr) {
            int count = 0;
            ptr = head;

            while (count < k && ptr != nullptr) {
                ptr = ptr->next;
                count++;
            }

            if (count == k) {
                ListNode* revHead = reverseLinkedList(head, k);

                if (newHead == nullptr) {
                    newHead = revHead;
                }

                if (ktail != nullptr) {
                    ktail->next = revHead;
                }

                ktail = head;
                head = ptr;
            } else {
                break;
            }
        }

        if (ktail != nullptr) {
            ktail->next = head;
        }

        return (newHead == nullptr) ? head : newHead;
    }




int main(){
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << "List Before: ";
    display(a);
    a = reverseKGroup(a,3);
    cout << "List After : ";
    display(a);




}