#include <iostream>
#include <climits>  
#include <vector>
#include <stack>
#include <algorithm>

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

//without recursion
    vector<int> postorderTraversal(node* root) {
        vector<int>ans;
        stack<node*>st;
        if(root!=NULL) {
            st.push(root);
        }
        while(st.size()>0){
            node* temp = st.top();
            st.pop();
            ans.push_back(temp->data);
            if(temp->left!=NULL){
                st.push(temp->left);
            }
            if(temp->right!=NULL){
                st.push(temp->right);
            }
        }
        reverse(ans.begin(),ans.end());
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
    cout << "Post-order Traversal: " << endl;
    vector<int>v;
    v=postorderTraversal(a);
    show(v);
}

