#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

    void show(TreeNode* root){
        if(root==NULL){
            return;
        }
        show(root->left);
        cout<<root->val<<" ";
        show(root->right);
    }

int inorderSuccessor(TreeNode* root){
    if(root == NULL || root->right == NULL) return -1;
        TreeNode* temp = root->right;
        while(temp->left!=NULL){
            temp=temp->left;
        }
            return temp->val;
    
}
int inorderPre(TreeNode* root){
    if(root == NULL || root->left == NULL) return -1;
        TreeNode* temp = root->left;
        while(temp->right!=NULL){
            temp=temp->right;
        }
            return temp->val;
    
}

int main(){
    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(3);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(6);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(7);
    root->right->right = new TreeNode(14);
    root->right->right->left = new TreeNode(13);
    show(root);cout<<endl;
    cout<<"Successor: "<<inorderSuccessor(root);
    cout<<endl;
    cout<<"Preccedure: "<<inorderPre(root);
}