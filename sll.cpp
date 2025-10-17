#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next; // This is called classed type pointer
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtHead(int value, Node** head){   // Node* beacuse head pointing towards creating first node
    Node* n = new Node(value);              //Dynamically allocate memory
    n->next = *head;
    *head = n;
}

int main()
{
    Node* head = NULL;
    insertAtHead(10, &head);
    return 0;
}