#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
private:
    Node *first;
    Node *last;

public:
    Queue()
    {
        first = last = NULL;
    }

    bool isEmpty()
    {
        return first == NULL;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);

        if (isEmpty())
        {
            first = last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            return -1; // If the queue is empty
        }

        int dequeuedData = first->data;
        Node *temp = first;

        if (first == last)
        {
            first = last = NULL;
        }
        else
        {
            first = first->next;
        }

        delete temp;
        return dequeuedData;
    }

    int front()
    {
        if (isEmpty())
        {
            return -1; // If the queue is empty
        }

        return first->data;
    }
};
