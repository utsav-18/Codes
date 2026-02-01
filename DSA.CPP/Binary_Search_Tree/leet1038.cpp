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

    int sum = 0;
    void reverse_inorder(TreeNode* root){
        if(root==NULL) return;
        reverse_inorder(root->right);
        root->val+=sum;
        sum = root->val;
        reverse_inorder(root->left);

    }
    TreeNode* bstToGst(TreeNode* root) {
        reverse_inorder(root);
        return root;
    }
    void show(TreeNode* root){
        if(root==NULL){
            return;
        }
        show(root->left);
        cout<<root->val<<" ";
        show(root->right);
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
    bstToGst(root);
    show(root);
}