#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(ListNode* ptr) {
    while (ptr != NULL) {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

    ListNode* sortList(ListNode* head) {
        if (head == NULL) return head;

        vector<int> v;
        ListNode* temp = head;

        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        int i=0;
        temp = head;

        while(temp!=NULL){
            temp->val = v[i++];
            temp=temp->next;
        }
        return head;
    }

int main() {


    return 0;
}