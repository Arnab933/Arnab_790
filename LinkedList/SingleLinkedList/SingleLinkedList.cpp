#include <bits/stdc++.h>
using namespace std;

class SingleLinkedList
{
private:
    class Node
    {
    public:
        Node *next = NULL;
        int value;
        int index;
        Node()
        {
        }

        Node(int value)
        {
            this->value = value;
        }
        Node(int value, int idx)
        {
            this->value = value;
            index = idx;
        }
    };

    Node *head = NULL;
    Node *tail = NULL;
    int size;

public:
    SingleLinkedList()
    {
        this->size = 0;
    }

    void insertFirst(int value)
    {
        Node *node = new Node(value);
        node->next = head;
        head = node;
        if (tail == NULL)
        {
            tail = node;
        }
        size += 1;
    }
    int Size()
    {
        return size;
    }

    void insertLast(int value)
    {
        Node *node = new Node(value);
        tail->next = node;
        tail = node;
        size++;
    }

    void deleteFirst()
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    void deleteLast()
    {
        Node *temp1 = head;
        Node *temp2 = head;
        for (int i = 1; i < size; i++)
        {
            if (i < size - 1)
                temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp1->next = NULL;
        tail = temp1;
        delete temp2;
        size--;
    }

    void deleteIndex(int idx)
    {
        if (idx == 0)
        {
            deleteFirst();
            return;
        }
        if (idx == size)
        {
            deleteLast();
            return;
        }
        Node *temp1 = head;
        Node *temp2 = head;
        for (int i = 1; i <= idx; i++)
        {
            if (i < idx)
                temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        delete temp2;
        size--;
    }
    void insertAtTheIndex(int value, int idx)
    {
        Node *temp = head;
        Node *node = new Node(value);
        if (idx == 0)
            insertFirst(value);
        return;
        if (idx == size)
            insertLast(value);
        return;
        for (int i = 1; i < idx; i++)
        {
            temp = temp->next;
        }
        node->next = temp->next;
        temp->next = node;
        size++;
    }
    void sortAllNode()
    {
    }
    void displayIndex(int idx)
    {
        Node *temp = head;
        for (int i = 1; i < idx; i++)
        {
            temp = temp->next;
        }
        cout << "The value of this index is:" << (temp->next)->value << endl;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    SingleLinkedList list;
    list.insertFirst(13);
    list.insertFirst(12);
    list.insertFirst(11);
    list.insertFirst(10);
    list.insertLast(14);
    list.insertAtTheIndex(40, 0);
    list.deleteIndex(3);
    list.deleteLast();
    list.display();
    cout << endl;
    cout << "The size is:" << list.Size() << endl;
    list.displayIndex(3);
}