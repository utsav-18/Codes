#include <iostream>
#include <climits>  
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        this ->left = NULL;
        this ->right = NULL;
    }
};

void InOrder(node *root){ // ==>> left root right
    if(root==NULL) return;
    InOrder(root->left); //call 1
    cout << root->data << " : "; // work
    InOrder(root->right); // call 2
}


int main() {
    node * a = new node(10);
    node * b = new node(20);
    node * c = new node(30);    
    node * d = new node(40);
    node * e = new node(50);
    node * f = new node(60);
    node * g = new node(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;   
    c->left = f;
    c->right= g;
    
    cout << "In-order Traversal: " << endl;
    InOrder(a);

}

