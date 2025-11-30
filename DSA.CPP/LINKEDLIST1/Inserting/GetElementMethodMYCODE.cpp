#include <iostream>
using namespace std;
    class node{
        public:
        int data;
        node * next;
        node(int data){
            this->data=data;
            this->next=NULL;
        }
    };

      int getidx(node *head,int idx){
                    int s=0;
                node *ptr=head;
                //if(idx<0 || idx>=size) {return -1;}
                /*else*/ if(idx==0) return ptr->data;
               // else if(idx==size-1) {return tail->data;}
                else {
                    while(s!=idx){
                        s++;
                        ptr=ptr->next;
                    }
                    return ptr->data;
                }
        }

        int main() {
            node *a = new node(1);  //0
            node *b = new node(2);  //1
            node *c = new node(3);  //2
            node *d = new node(4);  //3
            node *e = new node(5);  //4

                a->next = b;
                b->next = c;
                c->next = d;
                d->next = e;
                e->next = NULL;

                cout<<getidx(a,0)<<" ";
                cout<<getidx(a,1)<<" ";
                cout<<getidx(a,2)<<" ";
                cout<<getidx(a,3)<<" ";
                cout<<getidx(a,4)<<" ";
            
        }
        