#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DLinkedList
{
    Node *head;

public:
    DLinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int val)
    {
        Node *n = new Node(val);
        n->next = head;
        if (head != NULL)
        {
            head->prev = n;
        }
        head = n;
    }

    void insertAtTail(int val)
    {
        Node *n = new Node(val);
        if (head == NULL)
        {
            insertAtHead(val);
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }

    int getSize()
    {
        int size;
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            size++;
        }
        return size;
    }

    void insertAtPos(int val, int pos)
    {
        Node *n = new Node(val);
        int size = getSize();
        if (pos < 0 || pos > size)
        {
            cout << "Invalid position" << endl;
        }
        else if (pos == 0)
        {
            insertAtHead(val);
        }
        else
        {
            Node *temp = head;
            while (--pos)
            {
                temp = temp->next;
            }
            n->next = temp->next;
            n->prev = temp;
            temp->next->prev = n;
            temp->next = n;
        }
    }

    // void deleteAtHead(){}

    // void deletion(int val){}

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    DLinkedList dll;
    dll.insertAtHead(1);
    dll.insertAtHead(2);
    dll.insertAtHead(3);
    dll.insertAtHead(4);
    dll.display();
    dll.insertAtTail(10);
    dll.insertAtTail(11);
    dll.display();
    dll.insertAtPos(100, 3);
    dll.display();
    return 0;
}