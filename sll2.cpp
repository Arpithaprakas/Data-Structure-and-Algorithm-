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

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int val)
    {
        Node *n = new Node(val);
        n->next = head;
        head = n;
    }

    void insertAtTail(int val)
    {
        Node *n = new Node(val);
        if (head == NULL)
        {
            insertAtHead(val); //  (or) head = n when insertAtHead method is not available
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }

    int getSize(){           // this function return size of linked list
        Node* temp = head;    // we can using this function to check edge case
        int size =0;          // like if user enters invalid position
        while(temp != NULL){
            temp = temp->next;
            size++;
        }
        return size;
    }

    void insertAtpos(int val, int pos){
        Node* n = new Node(val);
        int size = getSize();
        if(pos<0 || pos>size){
            cout<<"Invalid Position"<<endl;
        }
        else if(pos == 0){
            insertAtHead(val);
        }
        else{
            Node * temp = head;
            while(--pos){
                temp=temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
    }

    void deleteAtHead(){
        if(head == NULL){
            cout<<"Linked list doesn't exist"<<endl;
            return;
        }

        Node* todelete = head;
        head = head->next;
    }

    void deleteAtPos(int val,int pos){
        
    }

    void display()
    {
        Node *temp = head;
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
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(30);
    ll.display();
    ll.insertAtTail(500);
    ll.display();
    ll.insertAtpos(101,2);
    ll.display();
    ll.insertAtpos(102,2);
    ll.display();
    ll.deleteAtHead();
    ll.display();

    return 0;
}