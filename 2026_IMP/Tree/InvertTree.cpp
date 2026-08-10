#include <iostream>
#include <vector>
using namespace std;

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

TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        swap(root->left, root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
int main(){

}