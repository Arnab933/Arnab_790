#include<iostream>
#include<stdlib.h>
using namespace std;

class BST{
    private:
        class Node{
            public:
            int val;
            Node* left;
            Node* right;
            Node(){}
            Node(int val){
                this->val = val;
                this->left = NULL;
                this->right = NULL;
            }
        };
  public:
    Node* root;
    BST(){
      this->root = NULL;
    }
    void insertNode(int val){
        
    }
};


int main(){
 
  return 0;
}