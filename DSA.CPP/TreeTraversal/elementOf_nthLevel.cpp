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

void display(node *root){
    if(root==NULL) return;
    cout << root->data << " : ";
    display(root->left);
    display(root->right);
}

//not optimised
// void nthLevel(node *root,int curr,int level) {
//     if (root == NULL) return;
//     if(level == curr)cout << root->data << " ";
//     nthLevel(root->left,curr+1,level);
//     nthLevel(root->right,curr+1,level);
// }

// optimised
void nthLevel(node *root,int curr,int level) {
    if (root == NULL) return;
    if(curr==level){
        cout << root->data << " ";
        return; // Return early if we found the level
    }
    if(level == curr)cout << root->data << " ";
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);
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
//display(a);
nthLevel(a,1,1);cout << endl;
nthLevel(a,1,2);cout << endl;   
nthLevel(a,1,3);cout << endl;
    return 0;

}

