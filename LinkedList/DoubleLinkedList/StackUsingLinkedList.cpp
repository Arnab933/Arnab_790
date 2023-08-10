#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    class Node
    {
    public:
        int value;
        int index;
        Node *next = NULL;
        Node *prev = NULL;
        Node() {}

        Node(int value)
        {
            this->value = value;
        }

        Node(int value, int index)
        {
            this->value = value;
            this->index = index;
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
        {
            tail = node;
            node->prev = NULL;
        }
        else
        {
            (node->next)->prev = node;
            node->prev = NULL;
        }
        size++;
    }

    int Size()
    {
        return size;
    }

    void pick(int idx)
    {
        Node *temp = head;
        if (idx == 0)
        {
            cout << head->value << endl;
            return;
        }
        if (idx <= size - 1)
        {
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            cout << temp->value;
        }
        else
            cout << "Invalid index" << endl;
    }
    void pick()
    {
        if (head != NULL)
            cout << head->value << endl;
        else
            cout << "The stack is empty" << endl;
    }

    void pop()
    {
        Node *temp = head;
        if (head != NULL)
        {
            cout << head->value << endl;
            head = head->next;
            delete temp;
            size--;
        }
        else
        {
            cout << "The stack is empty";
        }
    }
};

int main()
{
    Stack list;
    list.push(10);
    list.push(11);
    list.push(12);
    list.push(13);
    list.push(14);
    cout << "The size is:" << list.Size() << endl;

    // list.pop();
    // list.pop();
    // list.pick();

    // list.pick();
    // list.pick();

    list.pick(0);

    // list.pop();
    // list.pop();
    // list.pop();
    // list.pop();
    // cout << list.Size();

    return 0;
}