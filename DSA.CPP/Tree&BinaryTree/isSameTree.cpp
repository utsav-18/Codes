
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

        bool isSameTree(node* p, node* q) {
            if(p==NULL && q==NULL) return true;
            if(p==NULL && q!=NULL) return false;
            if(p!=NULL && q==NULL) return false;
    
            if((p->data) != (q->data)) return false;
    
            bool leftans = isSameTree(p->left , q->left);
            if(leftans==false) return false;
    
            bool rightans = isSameTree(p->right,q->right);
            if(rightans==false) return false;
    
            return true;
    
        }


    int main(){

        node* a1 = new node(1);
        node* b1 = new node(2);
        node* c1 = new node(3);
        node* d1 = new node(4);
        node* e1 = new node(15);
        node* f1 = new node(6);
        node* g1 = new node(7);
    
        a1->left=b1;
        a1->right=c1;
        b1->left=d1;
        b1->right=e1;
        c1->left=f1;
        c1->right=g1;


        node* a2 = new node(1);
        node* b2 = new node(2);
        node* c2 = new node(3);
        node* d2 = new node(4);
        node* e2 = new node(15);
        node* f2 = new node(6);
        node* g2 = new node(7);
    
        a2->left=b2;
        a2->right=c2;
        b2->left=d2;
        b2->right=e2;
        c2->left=f2;
        c2->right=g2;

    cout<<isSameTree(a1,a2);

    }