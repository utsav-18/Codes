//leet
#include<iostream>
#include <climits>

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
    

    node* invertTree(node* root) {
            if(root==NULL) return NULL;
            swap(root->left,root->right);
            invertTree(root->left);
            invertTree(root->right);
            return root;
    };

    void display(node * root){ //pre order;
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        display(root->left);
        display(root->right);
    }

    int main(){
        node* a = new node(1);
        node* b = new node(2);
        node* c = new node(3);
        node* d = new node(4);
        node* e = new node(5);
        node* f = new node(6);
        node* g = new node(7);
    
        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        c->left=f;
        c->right=g;

        display(a);
        invertTree(a);cout<<endl;
        display(a);

    }    