#include <iostream>
#include <vector>
#include <algorithm> // for max()
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // Find the height of the tree
    int levels(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    // Collect values at a specific level
    void nthLevel(TreeNode* root, int curr, int level, vector<int>& v) {
        if (root == NULL) return;
        if (curr == level) {
            v.push_back(root->val);
            return;
        }
        nthLevel(root->left, curr + 1, level, v);
        nthLevel(root->right, curr + 1, level, v);
    }

    // Traverse all levels and fill the result
    void lOrder(TreeNode* root, vector<vector<int>>& ans) {
        int n = levels(root);
        for (int i = 1; i <= n; i++) {
            vector<int> v;
            nthLevel(root, 1, i, v);
            ans.push_back(v);
        }
    }

    // Main function to return level order traversal
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root, ans);
        return ans;
    }
};

// Helper function to print 2D vector
void printLevelOrder(const vector<vector<int>>& levels) {
    for (const auto& level : levels) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// Example usage
int main() {
    // Constructing the tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(4), new TreeNode(5));
    root->right = new TreeNode(3, nullptr, new TreeNode(6));

    Solution sol;
    vector<vector<int>> result = sol.levelOrder(root);

    cout << "Level Order Traversal:" << endl;
    printLevelOrder(result);

    // Clean up the tree (optional for small test)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}
