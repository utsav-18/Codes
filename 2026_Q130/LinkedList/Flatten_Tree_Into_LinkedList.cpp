#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution {
public:
    vector<TreeNode*> v;

    void preOrder(TreeNode* root) {
        if (root == NULL) return;

        v.push_back(root);
        preOrder(root->left);
        preOrder(root->right);
    }

    void flatten(TreeNode* root) {

        if (root == NULL) return;

        preOrder(root);

        for (int i = 0; i < v.size() - 1; i++) {
            v[i]->left = NULL;
            v[i]->right = v[i + 1];
        }

        v[v.size() - 1]->left = NULL;
        v[v.size() - 1]->right = NULL;
    }
};

void display(TreeNode* root) {
    while (root != NULL) {
        cout << root->val << " ";
        root = root->right;
    }
    cout << endl;
}

int main() {

    /*
             1
           /   \
          2     5
         / \     \
        3   4     6
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(5);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right->right = new TreeNode(6);

    Solution obj;
    obj.flatten(root);

    cout << "Flattened Tree: ";
    display(root);

    return 0;
}