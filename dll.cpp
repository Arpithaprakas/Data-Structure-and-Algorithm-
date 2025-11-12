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

    void deleteAtHead()
    {
        if (head == NULL)
        {
            cout << "Nothing to delete";
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        delete temp;
    }

    void deletion(int val)
    {
        Node *temp = head;
        if (temp->data != val)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Value not found" << endl;
            return;
        }

        if (temp->prev != NULL)
        {
            temp->prev->next = temp->next;
        }

        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }

        if (temp == head)
        {
            head = head->next;
        }
        delete temp;
    }

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
    dll.deleteAtHead();
    dll.display();
    dll.deletion(1);
    dll.display();
    return 0;
}