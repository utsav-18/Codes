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
void show(vector<int>&v){
    for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
        }
    }


vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode* curr = root;
        while(curr!=NULL){
                if(curr->left!=NULL){ // find the pred
                    TreeNode* pred = curr->left;
                    while(pred->right!=NULL && pred->right!=curr){
                        pred = pred->right;
                    }
                    if(pred->right==NULL){ //Link
                        pred->right = curr;
                        curr = curr->left;
                    }
                    else{ // pred->right == curr : unlink
                        pred->right = NULL;
                        ans.push_back(curr->val);
                        curr = curr->right;
                    }
                }
                else{ // curr->left == NULL
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
        }
       return ans; 
    }

int main(){
    TreeNode * a = new TreeNode(10);
    TreeNode * b = new TreeNode(20);
    TreeNode * c = new TreeNode(30);    
    TreeNode * d = new TreeNode(40);
    TreeNode * e = new TreeNode(50);
    TreeNode * f = new TreeNode(60);
    TreeNode * g = new TreeNode(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;   
    c->left = f;
    c->right= g;
        vector<int>v;
        v=inorderTraversal(a);
        show(v);
}