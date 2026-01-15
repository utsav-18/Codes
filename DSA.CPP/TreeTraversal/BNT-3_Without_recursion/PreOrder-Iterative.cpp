#include <iostream>
#include <climits>  
#include <vector>
#include <stack>

using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
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

//with recursion

// void preorder(node* root, vector<int>&ans){
//         if(root==NULL) return;
//         ans.push_back(root->data);
//         preorder(root->left,ans);
//         preorder(root->right,ans);
//     }
// vector<int> preorderTraversal(node* root) {
//         vector<int>ans;
//         preorder(root,ans);
//         return ans;
//     }

//without recursion

    vector<int> preorderTraversal(node* root) {
        vector<int>ans;
        stack<node*>st;
        if(root!=NULL) {
            st.push(root);
        }
        while(st.size()>0){
            node* temp = st.top();
            st.pop();
            ans.push_back(temp->data);
            if(temp->right!=NULL){
                st.push(temp->right);
            }
            if(temp->left!=NULL){
                st.push(temp->left);
            }
        }
        return ans;
    }


int main() {
    node * a = new node(10);
    node * b = new node(20);
    node * c = new node(30);    
    node * d = new node(40);
    node * e = new node(50);
    node * f = new node(60);
    node * g = new node(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;   
    c->left = f;
    c->right= g;
    cout << "Pre-order Traversal: " << endl;
    vector<int>v;
    v=preorderTraversal(a);
    show(v);
}

