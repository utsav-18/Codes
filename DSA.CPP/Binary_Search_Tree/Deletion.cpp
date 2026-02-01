#include <iostream>
#include <algorithm>
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
    if(root==NULL)return;
    show(root->left);
    cout<<root->val<<" ";
    show(root->right);
}

TreeNode* ionp(TreeNode* root){
        TreeNode* pred = root->left;
            while(pred->right!=NULL){
                pred=pred->right;
            }
            return pred;
    }
    TreeNode* ions(TreeNode* root){
        TreeNode* suc = root->right;
            while(suc->left!=NULL){
                suc=suc->left;
            }
            return suc;
    }

TreeNode* deleteNode(TreeNode* root,int key){
    if(root==NULL) return NULL;
    if(root->val == key){
            //case 1: Leave node
            if(root->left==NULL && root->right==NULL) return NULL;
            //Case 2: has one child
            if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL) return root->left;
                else return root->right;
            }
            //Case 3 : hase 2 child
            if(root->left!=NULL && root->right!=NULL){
                //replace the root with it's inoreder pre/succ
                TreeNode* pre = ionp(root);
                root->val = pre->val;
                root->left = deleteNode(root->left,pre->val);
            }
    }
    else if(root->val > key){
        root->left = deleteNode(root->left,key);
    }
    else{
        root->right = deleteNode(root->right,key);
    }
    return root;
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
    show(root);
    cout<<endl;
    deleteNode(root,8);
    show(root);
}