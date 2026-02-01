#include <iostream>
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
void inorder(TreeNode* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}


    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) 
            return new TreeNode(val);

        else if (val > root->val) {
            if (root->right == NULL) {
                root->right = new TreeNode(val);
            } else {
                insertIntoBST(root->right, val);
            }
        } 
        else {
            if (root->left == NULL) {
                root->left = new TreeNode(val);
            } else {
                insertIntoBST(root->left, val);
            }
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

    int key = 5;
    cout << "Inorder Traversal before insertion:\n";

    inorder(root);
    cout<<endl;

    insertIntoBST(root, key);

    cout << "Inorder Traversal after insertion:\n";
    inorder(root);
    cout<<endl;

    return 0;
}
