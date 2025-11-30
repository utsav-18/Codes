//leet 257
#include <iostream>
#include <vector>
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
    
void helper(node * root, string s , vector<string>& ans){
    if(root==NULL) return;
    string a = to_string(root->data);

    if(root->left==NULL && root->right==NULL){
        s+=a;
        ans.push_back(s);
        return;
    }
  
    helper(root->left, s+a+"->" , ans);
    helper(root->right, s+a+"->" , ans);
}
    vector<string> binaryTreePaths(node* root) {
        vector<string> ans;
        helper(root," ",ans);
        return ans;
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
    
            vector<string> fans;
            fans=binaryTreePaths(a);


        for(int i=0;i<fans.size();i++){
            cout<<fans[i]<<" ";
        }
    

    }