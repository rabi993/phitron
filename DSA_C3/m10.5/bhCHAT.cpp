#include <iostream>
#include <list>
#include <iterator>

using namespace std;

class Node
{
public:
    string value;
    Node *next;
    Node *prev;

    Node(string value)
    {
        this->value = value;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_tail(string value)
    {
        Node *newNode = new Node(value);
        if (tail == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
};

void printList(DoublyLinkedList &dll)
{
    Node *tmp = dll.head;
    while (tmp != nullptr)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void visit(DoublyLinkedList &dll, string address)
{
    Node *tmp = dll.head;
    while (tmp != nullptr)
    {
        if (tmp->value == address)
        {
            cout << tmp->value << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

void moveNext(DoublyLinkedList &dll, int &currentPosition)
{
    if (dll.head == nullptr)
    {
        cout << "Not Available" << endl;
        return;
    }

    if (dll.head->next == nullptr)
    {
        cout << "Not Available" << endl;
        return;
    }

    if (currentPosition < 0)
        currentPosition = 0;

    Node *currentNode = dll.head;
    for (int i = 0; i < currentPosition; ++i)
    {
        currentNode = currentNode->next;
        if (currentNode == nullptr)
        {
            cout << "Not Available" << endl;
            return;
        }
    }

    Node *nextNode = currentNode->next;
    if (nextNode != nullptr)
    {
        cout << nextNode->value << endl;
        currentPosition++;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void movePrev(DoublyLinkedList &dll, int &currentPosition)
{
    if (dll.head == nullptr)
    {
        cout << "Not Available" << endl;
        return;
    }

    if (dll.head->next == nullptr)
    {
        cout << "Not Available" << endl;
        return;
    }

    if (currentPosition < 0)
        currentPosition = 0;

    Node *currentNode = dll.head;
    for (int i = 0; i < currentPosition; ++i)
    {
        currentNode = currentNode->next;
        if (currentNode == nullptr)
        {
            cout << "Not Available" << endl;
            return;
        }
    }

    Node *prevNode = currentNode->prev;
    if (prevNode != nullptr)
    {
        cout << prevNode->value << endl;
        currentPosition--;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    DoublyLinkedList dll;
    string value;

    // Input values until "end" is encountered
    while (cin >> value && value != "end")
    {
        dll.insert_tail(value);
    }

    int q;
    cin >> q;

    // Assume the first command is "visit"
    string initialAddress;
    cin >> initialAddress;

    int currentPosition = 0;
    visit(dll, initialAddress);

    while (--q > 0)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;
            visit(dll, address);
        }
        else if (command == "next")
        {
            moveNext(dll, currentPosition);
        }
        else if (command == "prev")
        {
            movePrev(dll, currentPosition);
        }
    }

    return 0;
}
