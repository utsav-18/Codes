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

void PostOrder(node *root){ // ==>> left right root
    if(root==NULL) return;
    PostOrder(root->left); //call 1
    PostOrder(root->right); // call 2
    cout << root->data << " : "; // work
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
    
    cout << "Post-order Traversal: " << endl;
    PostOrder(a);

}

