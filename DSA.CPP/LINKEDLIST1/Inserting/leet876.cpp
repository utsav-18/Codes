#include <iostream>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode *next;
    ListNode(int data){
        this->data=data;
        this->next=NULL;
    }
};


class MYSolution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *ptr=head;int size=0;
        while(ptr!=NULL){
            ptr=ptr->next;
            size++;
        }
        int midIdx=size/2;
        for(int i=0;i<midIdx;i++){
            head=head->next;
        }
        return head;
    }

    void display(ListNode *a){
        ListNode * ptr=a;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
            cout<<endl;
    }
};

        
    class Solution {
    public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
            return slow;
            }
        void display(ListNode *a){
            ListNode * ptr=a;
                while(ptr!=NULL){
                    cout<<ptr->data<<" ";
                      ptr=ptr->next;
            }
            cout<<endl;
        }
    };
    
    int main() {
        ListNode *a =new ListNode(0);
        ListNode *b =new ListNode(1);
        ListNode *c =new ListNode(2);
        ListNode *d =new ListNode(3);
        ListNode *e =new ListNode(4);
        ListNode *f =new ListNode(5);
        ListNode *g =new ListNode(6);
        ListNode *h =new ListNode(7);
        a->next=b;
        b->next=c;
        c->next=d;
        d->next=e;
        e->next=f;
        f->next=g;
        g->next=h;
        h->next=NULL;
        MYSolution s1;

            s1.display(a);
           ListNode* middle1 =  s1.middleNode(a);
            s1.display(middle1);

            Solution s2;
            s2.display(a);
            ListNode *middle2 = s2.middleNode(a);
            s2.display(middle2); 
     }



