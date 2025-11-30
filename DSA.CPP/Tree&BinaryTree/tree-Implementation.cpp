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

void display(node * root){ //pre order;
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}

int sum(node * root){
    if(root==NULL) return 0;
    int leftsum = sum(root->left);
    int rightsum = sum(root->right);
    int totalsum = root->data + leftsum + rightsum;
    return totalsum;
}

int size(node * root){
    if(root==NULL) return 0;
    int left = size(root->left);
    int right = size(root->right);
    int totalsize = 1 + left + right ; 
    return totalsize;
}

int maxInTree(node * root){
    if(root==NULL) return INT_MIN;
    int lMax =  maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return max(root->data , max(lMax , rMax));
}
int minInTree(node *root){
    if(root==NULL) return INT_MAX;
    int left = minInTree(root->left);
    int right = minInTree(root->right);
    return min(root->data , min(left,right));
}
int product(node * root){
    if(root==NULL) return 1;
    int left = product(root->left);
    int right = product(root->right);
    int ans = root->data * left * right;
    return ans;
}
int level(node * root){
    if(root==NULL) return 0;
    int left = level(root->left);
    int right = level(root->right);
    return 1 + max(left,right);
}

int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(15);
    node* f = new node(6);
    node* g = new node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    cout<<" ~ Elements of the tree: ";display(a);
    cout<<endl;
    cout<<" ~ Sum of all elements: "<<sum(a);
    cout<<endl;
    cout<<" ~ size of the tree: "<<size(a);
    cout<<endl;
    cout<<" ~ Max of the tree: "<<maxInTree(a);
    cout<<endl;
    cout<<" ~ Min of the tree: "<<minInTree(a);
    cout<<endl;
    cout<<" ~ Product of the tree: "<<product(a);
    cout<<endl;
    cout<<" ~ Levels of the tree: "<<level(a)<<endl<<" ~ Height of the tree: "<<level(a)-1;
}