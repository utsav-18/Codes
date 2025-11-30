#include <iostream>
#include <climits>

using namespace std;
    
class node{
public:
    int data;
    node *left;
    node *right;
        node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

void display(node * root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}

int sum(node * root){
    if(root==NULL) return 0;
    int l = sum(root->left);
    int r = sum(root->right);
    int ans = root->data + l + r ;
    return ans;

}
int size(node * root){
    if(root==NULL) return 0;
    int l = size(root->left);
    int r = size(root->right);
    int ans = 1+l+r;
    return ans;
}

int maxNode(node * root){
    if(root==NULL) return INT_MIN;
    int lm = maxNode(root->left);
    int rm = maxNode(root->right);
    return max(root->data ,max(lm,rm));
}

int main(){
    node *a = new node(1);
    node *b = new node(2);
    node *c = new node(3);
    node *d = new node(4);
    node *e = new node(5);
    node *f = new node(6);
    node *g = new node(7);

        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        c->left=f;
        c->right=g;

    display(a);cout<<"\n";
    cout<<sum(a);cout<<"\n";
    cout<<size(a);cout<<"\n";
    cout<<maxNode(a)<<"\n";
}