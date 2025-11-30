#include <iostream>
    using namespace std;

  struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        int lenA=0;
        while(tempA!=NULL){
            lenA++;
            tempA = tempA->next;
        }
        int lenB=0;
        while(tempB!=NULL){
            lenB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        if(lenA>lenB){
            int diff = lenA-lenB;
            for(int i=1;i<=diff;i++){
                tempA = tempA->next;
            }
            while(tempA!=tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }

        else {
            int diff = lenB-lenA;
            for(int i=1;i<=diff;i++){
                tempB = tempB->next;
            }
            while(tempA!=tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }

    }
};

  int main(){

                ListNode *a1 =new ListNode(-1);
                ListNode *b1 =new ListNode(-2);
                ListNode *c1 =new ListNode(-3);
                ListNode *a = new ListNode(0);
                ListNode *b = new ListNode(1);
                ListNode *c = new ListNode(2);
                ListNode *d = new ListNode(3);

                a1->next=b1;
                b1->next=c1;
                c1->next=c;

                a->next = b;
                b->next = c;
                c->next = d;
            
            Solution s;
            ListNode * conection = s.getIntersectionNode(a1,a);
            cout<<conection->val;

  }