#include <iostream>
    using namespace std;

    class Node{
        public:
        int data;
        Node* next;
        //constructer
            Node(int data){
                this->data=data;
                this->next=NULL; //giving every value a null address first;
            }
    };

    // void display(Node *ptr){
    //         while(ptr!=NULL){
    //             cout<<ptr->data<<" ";
    //             ptr=ptr->next;
    //         }
    // }

    int main() {
        Node a(10);
        Node b(20);
        Node c(30);
        Node d(40);
        a.next= &b;
        b.next= &c;
        c.next= &d;
        d.next= NULL;

        cout<<"Linked List: \n";

      //  display(&a);
        Node temp1=a;
        while(1){
            cout<<temp1.data<<" ";
            if(temp1.next==NULL) break;
            temp1= *(temp1.next);
        }
        cout<<"\n";

        (a.next)->data=70; //it can also change the data;

       // display(&a);

        Node temp2=a;
        while(1){

            cout<<temp2.data<<" ";
            if(temp2.next==NULL) break;
            temp2= *(temp2.next);

        }

        cout<<"\n";
        cout<<"It will print b: "<<(*(a.next)).data<<"\n"; //it will print the val of b;

        cout<<"It will print c: "<<((a.next)->next)->data;
    }