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


 void printBST(TreeNode* root, int space = 0) {
    if (root == NULL) return;

    space += 5;

    // Print right subtree
    printBST(root->right, space);

    // Print current node
    cout << endl;
    for (int i = 5; i < space; i++)
        cout << " ";
    cout << root->val;

    // Print left subtree
    printBST(root->left, space);
}

    TreeNode* helper(vector<int>& arr, int lo,int hi){
        if(lo>hi) return NULL;
        int mid = lo + (hi-lo)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = helper(arr,lo,mid-1);
        root->right = helper(arr,mid+1,hi);     
        return root;   
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        int n = arr.size();
        return helper(arr,0,n-1);
    }

int main(){
    vector<int>arr;
    arr={1,2,3,4,5,6,7};
    TreeNode* root = sortedArrayToBST(arr);
    printBST(root);cout<<endl;

}