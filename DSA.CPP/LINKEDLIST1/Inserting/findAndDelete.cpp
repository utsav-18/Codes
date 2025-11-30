#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void display(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node *head, int value) {
    Node *current = head;
    while (current->next != NULL && current->next->data != value) {
        current = current->next;
    }

    if (current->next != NULL) {
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

int main() {
    Node *a = new Node(0);
    Node *b = new Node(1);
    Node *c = new Node(2);
    Node *d = new Node(3);

    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    deleteNode(a,1);
    deleteNode(a,2);
    display(a);

    return 0;
}
