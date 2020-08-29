//
// Author: REET

#include <iostream>
#ifndef QueueCpp_h
#define QueueCpp_h
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue
{
private:
    int front;
    int rear;
    int size;
    Node **Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new Node *[size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new Node *[this->size];
    }
    void enqueue(Node *x);
    Node *dequeue(void);
    void Display(void);
    int isEmpty(Queue q);
};

void Queue::enqueue(Node *x)
{
    if (rear = size - 1)
        cout << "Queue Full" << endl;
    else
    {
        rear++;
        Q[rear] = x;
    }
}

Node *Queue::dequeue()
{
    Node *x = NULL;
    if (front == rear)
        cout << "Queue is Empty" << endl;
    else
    {
        x = Q[front + 1];
        front++;
    }
}

void Queue::Display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl;
}

int Queue::isEmpty(Queue q)
{
    return q.front == q.rear;
}

#endif /* QueueCpp_h */