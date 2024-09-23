#include<iostream>
#include<stdlib.h>
using namespace std;

class LinekdList{
    private:
        class Node{
            public:
                int data;
                Node* next;
                
                Node(){}

                Node(int data){
                    this -> data = data;
                    this -> next = NULL;
                }
        };
    public:
        Node* head;
        Node* tail;
        LinekdList(){
            this -> head = NULL;
            this -> tail = NULL;
        }

        void insert(int data){
            Node* node = new Node(data);

            if(this->head == NULL){
                this -> head = node;
                this -> tail = head;
            }
            else{
                this -> tail -> next = node;
                this -> tail = node;
            }
        }

        void display(){
            Node* temp = head;

            while(temp != NULL){
                cout<<temp->data<<"->";
                temp = temp -> next;
            }
        }

};





int main(){
    int arr[] = {1,2,3,4,5,5};
    LinekdList list;
    for (int i = 0; i < 6; i++)
    {
       list.insert(arr[i]);
    }
    list.display();
  return 0;
}
