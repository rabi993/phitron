/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        next = nullptr;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};


class Stack
{
    //Write your code here
    private:
    Node *top;
    int size;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void push(int data)
    {
        Node *newNode = new Node(data, top);
        top = newNode;
        size++;
    }

    void pop()
    {
        if (!isEmpty())
        {
            Node *temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }

    int getTop()
    {
        if (!isEmpty())
        {
            return top->data;
        }
        return -1; // If the stack is empty
    }
};



int main()
{
    Stack myStack;

    // Testing the Stack operations
    std::cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << std::endl;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Size of stack: " << myStack.getSize() << std::endl;
    std::cout << "Top element of stack: " << myStack.getTop() << std::endl;

    myStack.pop();
    std::cout << "After popping, size of stack: " << myStack.getSize() << std::endl;
    std::cout << "Top element of stack: " << myStack.getTop() << std::endl;

    return 0;
}
