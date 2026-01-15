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
void show(vector<vector<int>>&v){
    for(int i=0;i<v[0].size();i++){
            for(int j=0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
}


    void helper(TreeNode* root,vector<int>v,vector<vector<int>>&ans,int sum){
            if(root==NULL){
                return;
            }
            if(root->left==NULL && root->right==NULL){
                if(root->val==sum){
                    v.push_back(root->val);
                    ans.push_back(v);
                }
                return;
            }
            v.push_back(root->val);
            helper(root->left,v,ans,sum-(root->val));
            helper(root->right,v,ans,sum-(root->val));
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
            vector<int> v;
            helper(root,v,ans,targetSum);
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
        vector<vector<int>>v;
        v=pathSum(a,80);
        show(v);
}