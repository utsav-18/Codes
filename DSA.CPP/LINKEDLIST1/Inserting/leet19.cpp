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
    
    //using slow and fast pointers;
    
    class Method2 {
    public:
    ListNode* removeNthfromEnd(ListNode* head,int n) {

        ListNode* slow=head;
        ListNode* fast=head;
            for(int i=1;i<=n+1;i++){
                if(fast==NULL) return head->next;
                fast=fast->next;
            }
            while(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }

        slow->next=slow->next->next;
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


    // class Method1 {
    // public:
    // ListNode* removeNthfromEnd(ListNode* head,int n) {
    //         int len = 0;
    //         ListNode* temp = head;
    //         while(temp!=NULL){
    //             len++;
    //             temp = temp->next;
    //         }

    //             if(n==len) {
    //                 head=head->next;
    //                 return head;
    //             }

    //         int idx = len-n;
    //         temp=head;
    //         for(int i=1;i<=idx-1;i++){
    //             temp = temp->next;
    //         }
    //         temp->next=temp->next->next;
    //         return head;
    //     }
    //      void display(ListNode *a){
    //         ListNode * ptr=a;
    //             while(ptr!=NULL){
    //                 cout<<ptr->data<<" ";
    //                   ptr=ptr->next;
    //         }
    //         cout<<endl;
    //     }
    // };

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
            // Method1 s1;
            // s1.display(a);
            // s1.removeNthfromEnd(a,4);
            // s1.removeNthfromEnd(a,5);
            // s1.removeNthfromEnd(a,6);
            // s1.display(a);

            Method2 s2;
            s2.display(a);
            s2.removeNthfromEnd(a,4);
            s2.display(a);

        }