// Implementing STACK using Linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int val)
    {
        Node *n = new Node(val);
        n->next = top;
        top = n;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow";
            return;
        }

        Node *todelete = top;
        top = top->next;
        delete todelete;
    }

    int peek()
    {

        if (top == NULL)
        {
            return -1;
        }
        return top->data;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void display()
    {
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    Stack s;
    s.push(20);
    s.push(25);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.pop();
    s.display();
    cout << s.peek() << endl;
    cout << (s.isEmpty() ? "YES" : "NO"); // ternary operation
    return 0;
}
