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
    cout<<endl;
}


    int level(TreeNode * root){
        if(root==NULL) return 0;
        int left = level(root->left);
        int right = level(root->right);
        return 1 + max(left,right);
    }
    
    //right view 
    void preorderRIGHT(TreeNode* root,vector<int>&ans,int level){
        if(root==NULL) return;
        ans[level] = root->val;
        preorderRIGHT(root->left,ans,level+1);
        preorderRIGHT(root->right,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int l = level(root);
        vector<int>ans(l,0);
        preorderRIGHT(root,ans,0);
        return ans;
    }

    //left View 
    void preorderLEFT(TreeNode* root,vector<int>&ans,int level){
        if(root==NULL) return;
        ans[level] = root->val;
        preorderLEFT(root->right,ans,level+1);
        preorderLEFT(root->left,ans,level+1);
    }
    vector<int> leftSideView(TreeNode* root) {
        int l = level(root);
        vector<int>ans(l,0);
        preorderLEFT(root,ans,0);
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

vector<int>v1;
v1=rightSideView(a);cout<<"Right Side View: ";
show(v1);

vector<int>v2;
v2=leftSideView(a);cout<<"Left Side View: ";
show(v2);
}