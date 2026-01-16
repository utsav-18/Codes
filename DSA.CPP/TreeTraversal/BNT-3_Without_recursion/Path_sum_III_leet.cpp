#include <iostream>
#include <climits>  
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this ->left = NULL;
        this ->right = NULL;
    }
};

    void helper(TreeNode* root,long long sum,int &count){
        if(root==NULL) return;
            if(root->val==sum){
                count++;
            }        
        helper(root->left,sum-(root->val),count);
        helper(root->right,sum-(root->val),count);
    }

    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        int count=0;
        helper(root,(long long)targetSum,count);
        count += (pathSum(root->left,targetSum) + pathSum(root->right,targetSum));
    }

int main(){
    TreeNode * a = new TreeNode(1);
    TreeNode * b = new TreeNode(2);
    TreeNode * c = new TreeNode(3);    
    TreeNode * d = new TreeNode(4);
    TreeNode * e = new TreeNode(5);
    TreeNode * f = new TreeNode(6);
    TreeNode * g = new TreeNode(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;   
    c->left = f;
    c->right= g;
    cout<<pathSum(a,10);
}