// BST in C language
// Author: REET
#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node* lchild;
    int data;
    struct Node* rchild;
} *root=NULL;

void Insert(struct Node* node, int data) {
    struct Node* curr = node;
    struct Node* newnode;
    struct Node* prev;
    if(!node) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->lchild = NULL;
        newnode->rchild = NULL;
        newnode->data = data;
        root = newnode;
        return;
    }
    while(curr) {
        prev = curr;
        if(data<curr->data)
            curr = curr->lchild;
        else if(data>curr->data)
            curr = curr->rchild;
        else
            return;
    }
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->lchild = NULL;
    newnode->rchild = NULL;
    newnode->data = data;
    if(data<prev->data)
        prev->lchild = newnode;
    else
        prev->rchild = newnode;
}

void Inorder(struct Node* node) {
    if(node) {
        Inorder(node->lchild);
        printf("%d ",node->data);
        Inorder(node->rchild);
    }
}

void Search(int key) {
    if(!root) {
        printf("No elements are present in BST. Kindly add some elements\n");
        return;
    }
    struct Node* curr = root;
    while(curr) {
        if(curr->data == key) {
            printf("Element %d is present in BST\n", key);
            return;
        }
        else if(key<curr->data)
            curr = curr->lchild;
        else
            curr = curr->rchild;
    }
    printf("Element %d is not present in BST\n", key);
}

int main() {
    Search(10);
    Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);
    Insert(root, 8);
    Insert(root, 30);
    printf("Inorder Traversal: ");
    Inorder(root);
    printf("\n");
    Search(10);
    Search(17);
    return 0;
}

// OUTPUT
// Inorder Traversal: 5 8 10 20 30 