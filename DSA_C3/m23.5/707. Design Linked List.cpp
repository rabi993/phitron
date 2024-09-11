class Node {
public:
    int val;
    Node* next;

    Node(int value) : val(value), next(nullptr) {}
};
class MyLinkedList {
Node* head;

public:
    MyLinkedList() : head(nullptr) {}

    int get(int index) {
        if (index < 0 || head == nullptr) {
            return -1; // Invalid index or empty list
        }

        Node* current = head;
        for (int i = 0; i < index; ++i) {
            if (current->next == nullptr) {
                return -1; // Index out of bounds
            }
            current = current->next;
        }

        return current->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index < 0) {
            // Index is negative, do nothing
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* current = head;

        for (int i = 0; i < index - 1; ++i) {
            if (current == nullptr) {
                // Index out of bounds, do nothing
                return;
            }
            current = current->next;
        }

        if (current != nullptr) {
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0 || head == nullptr) {
            // Invalid index or empty list, do nothing
            return;
        }

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        for (int i = 0; i < index - 1; ++i) {
            if (current->next == nullptr) {
                // Index out of bounds, do nothing
                return;
            }
            current = current->next;
        }

        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }
};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
