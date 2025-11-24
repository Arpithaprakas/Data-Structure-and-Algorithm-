#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *createNode(int data)
{ // return type is Node because this must return Node that newly created node
    Node *n = new Node(data);
    return n;
}

int main()
{
    Node *root = createNode(1); // Level 1 or root node
    root->left = createNode(2); // Level 2
    root->right = createNode(3);
    root->left->left = createNode(4); // Level 3
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Level 4

    root->left->right->left = createNode(8);
    root->right->left->left = createNode(15);
    root->right->left->right = createNode(9);
    return 0;
}