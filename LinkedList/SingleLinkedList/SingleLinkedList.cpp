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
        if(head==NULL){
            node->next=head;
            head=node;
            tail=node;
        }
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
        cout << "End";
        cout << endl;
    }
};

int main()
{
    SingleLinkedList list;
    int a;
    while (true)
    {
        cout << "\nEnter the value for inserting:" << endl;
        cin >> a;
        list.insertLast(a);
        int choice;
        cout << "\nAre you want to continue for inserting?\n1->Yes\n0->No" << endl;
        cin >> choice;
        if (choice == 1)
            continue;
        list.display();
        cout<<"The size is:"<<list.Size();
        cout << endl;
        break;
    }
    while (true)
    {
        cout << "\nAre you want to delete element:\n1->Yes\n0->No:" << endl;
        if (list.Size() == 0)
        {
            cout << "Pls insert first before delete!!!" << endl;
            break;
        }
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            int idx;
            cout << "\nEnter the index for deletion:\n1->First Element\n2->Last Element\n3->Other element:" << endl;
            cin >> idx;
            if (choice == 1)
            {
                list.deleteFirst();
                list.display();
                cout << "The size is:" << list.Size()<<endl;
            }
            else if (choice == 2)
            {
                list.deleteLast();
                list.display();
                cout << "The size is:" << list.Size()<<endl;

            }
            else
            {
                int idx;
                cout << "Enter the index for delete:\n";
                cin >> idx;
                list.deleteIndex(idx);
                list.display();
                cout << "The size is:" << list.Size()<<endl;

            }
            int rechoice;
            cout << "\nAre want to continue deletion:\n1->Yes\n0->No\n";
            cin >> rechoice;
            if (rechoice == 1)
                continue;
            else
            {
                break;
            }
        }
    }
}