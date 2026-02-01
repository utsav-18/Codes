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


    // long long maxTree(TreeNode* root){
    //     if(root==NULL) return LLONG_MIN;
    //     return max((long long)(root->val),max(maxTree((root->left)),maxTree(root->right)));
    // }
    // long long minTree(TreeNode* root){
    //     if(root==NULL) return LLONG_MAX;
    //     return min((long long)(root->val),min(minTree(root->left),minTree(root->right)));
    // }
    // bool isValidBST(TreeNode* root) {
    //     if(root==NULL) return true;
    //     else if((long long)(root->val) <= maxTree(root->left)) return false;
    //     else if((long long)(root->val) >=minTree(root->right)) return false;
    //     return isValidBST(root->left) && isValidBST(root->right);
    // }

    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]) return false;
        }
        return true;
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
     if(isValidBST(root)){
        cout<<"This is a Valid BST!!";
     }
     else{
        cout<<"This is not a valis BST!!";
     }
}