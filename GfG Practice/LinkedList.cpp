#include <bits/stdc++.h>

using namespace std;

int size = 0;

class Node {
   public:
    int data;
    Node* next;
    Node() {next=NULL;};
    Node(int x) {data=x; next=NULL;};
};

void InsertAtFirst(Node** head_ref, int x) {
    Node* new_node = new Node(x);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
    size++;
}

void InsertAtLast(Node** head_ref, int x) {
    Node* last = *(head_ref);
    Node* new_node = new Node(x);
    if(!(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while(last->next)
        last = last->next;
    last->next = new_node;
    size++;
}

void ReverseLL(Node** head_ref) {
    Node* prev = NULL;
    Node* curr = *head_ref;
    Node* next = NULL;
    while(curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head_ref = prev;
    cout << "Reversal successfully done...\n";
}

void PrintLL(Node* head_ref) {
    while(head_ref) {
        cout << head_ref->data << " ";
        head_ref = head_ref->next;
    }
    cout << "\n";
}

int main() { 
    Node* head = NULL;
    int choice;
    int x;
    int pos;
    cout << "1:Insert at first\n2:Insert at last\n3:To reverse\n4:To print\n5:To exit\n";
    while(1) {
        cout << "Enter choice: ";
        cin >> choice;
        if(choice==5) break;
        switch(choice) {
            case 1: 
                cout << "Enter data to be inserted: ";
                cin >> x;
                InsertAtFirst(&head, x);
                continue;
            case 2: 
                cout << "Enter data to be inserted: ";
                cin >> x;
                InsertAtLast(&head, x);
                continue;
            case 3: 
                ReverseLL(&head);
                continue;
            case 4: 
                cout << "Elements of the linked list are: ";
                PrintLL(head);
                continue;
            default:
                cout << "Invalid choice\n";
        }
    }
 }