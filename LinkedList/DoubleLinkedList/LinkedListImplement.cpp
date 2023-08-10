#include <bits/stdc++.h>
using namespace std;

class DoubleLinkedList
{
private:
    class Node
    {
    public:
        Node *next = NULL;
        Node *prev = NULL;
        int value;

        Node(int value)
        {
            this->value = value;
        }

        Node() {}

        int index;
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
    DoubleLinkedList()
    {
        size = 0;
    }

    int Size()
    {
        return size;
    }

    void insertFirst(int value)
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

    void displayFromHead()
    {
        Node *temp = head;
        cout << "start->";
        while (temp != NULL)
        {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "end";
    }

    void displayFromTail()
    {
        Node *temp = tail;
        cout << "end->";
        while (temp != NULL)
        {
            cout << temp->value << "->";
            temp = temp->prev;
        }
        cout << "start";
    }
};

int main()
{
    DoubleLinkedList list;
    list.insertFirst(10);
    list.insertFirst(9);
    list.insertFirst(8);
    list.insertFirst(7);
    list.displayFromHead();
    cout << endl;
    list.displayFromTail();
    cout << endl;
    cout << "The size is:" << list.Size();
    return 0;
}
