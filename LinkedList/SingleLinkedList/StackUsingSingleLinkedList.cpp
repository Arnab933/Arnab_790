#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    class Node
    {
    public:
        int value;
        Node *next = NULL;

        Node() {}

        Node(int value)
        {
            this->value = value;
        }
    };
    Node *head = NULL;
    Node *tail = NULL;
    int size;

public:
    Stack()
    {
        size = 0;
    }

    void push(int value)
    {
        Node *node = new Node(value);
        node->next = head;
        head = node;
        if (tail == NULL)
            tail = node;
        size++;
    }

    void pop()
    {
        Node *temp = head;
        if (head != NULL)
        {
            cout << head->value << endl;
            head = head->next;
            size--;
            delete temp;
        }
        else
            cout << "The stack is empty!!!<<endl";
    }

    void peek()
    {
        cout << head->value << endl;
    }

    int Size()
    {
        return size;
    }
};

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(11);
    stack.push(12);
    stack.push(13);

    // stack.peek();
    stack.pop();
    stack.peek();
    cout << "The size is:" << stack.Size();
    return 0;
}