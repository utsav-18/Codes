#include <iostream>
#include <vector>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        // Swap left and right
        swap(root->left, root->right);

        // Invert both subtrees
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
int main(){

}