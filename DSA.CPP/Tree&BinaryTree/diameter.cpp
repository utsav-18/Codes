#include <iostream>
using namespace std;
int maxDia = 0;

class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int data){
                this->data=data;
                this->left=NULL;
                this->right=NULL;
            }
    };

    int level(TreeNode * root){
        if(root==NULL) return 0;
        int left = level(root->left);
        int right = level(root->right);
        return 1 + max(left,right);
    } 

    void helper(TreeNode * root ,int &maxDia){
        if(root==NULL) return;
        int dia = level(root->left) + level(root->right);
        maxDia = max(maxDia,dia);
        helper(root->left,maxDia);
        helper(root->right,maxDia);
    }


    int diameterOfBinaryTree(TreeNode * root){
        int maxDia = 0;
        helper(root,maxDia);
        return maxDia;
    }

    int main(){
        TreeNode* a = new TreeNode(1);
        TreeNode* b = new TreeNode(2);
        TreeNode* c = new TreeNode(3);
        TreeNode* d = new TreeNode(4);
        TreeNode* e = new TreeNode(15);
        TreeNode* f = new TreeNode(6);
        TreeNode* g = new TreeNode(7);
    
        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        c->left=f;
        c->right=g;

       cout<<"Diameter of the tree: "<<diameterOfBinaryTree(a);

        }
    