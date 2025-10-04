#include <iostream>
#define n 100
using namespace std;

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void print()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflown" << endl;
            return;
        }
        top++;
        arr[top] = x;
        print();
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        cout << "Poped element is " << arr[top] << endl;
        top--;
    }
};

int main()
{
    Stack st;
    st.push(5);
    st.push(50);
    st.push(30);
    st.pop();

    return 0;
}