#include<iostream>
#include<stdlib.h>
using namespace std;

class BinaryTree{
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
    BinaryTree(){
      this->root = NULL;
    }

    void helper(Node*parent){
      cout<<"Do you want to insert at left of "<<parent->val<<endl;
      int left;
      cin>>left; // if the left value is 0 it means we not want to insert left node other wise we want to insert left node
      
      if(left){
        cout<<"Enter the value of the left node:";
        cin>>left;
        parent->left = new Node(left);
        helper(parent->left);
      }

      cout<<"Do you want to insert at right of "<<parent->val<<endl;
      int right;
      cin>>right;

      if(right){
        cout<<"Enter the value of the right node:"<<endl;
        cin>>right;
        parent->right = new Node(right);
        helper(parent->right);
      }
    }

    void insertNode(){
      int val = 0;
      cout<<"Enter value of the root node:"<<endl;
      cin>>val;
      Node* root = new Node(val);
      this->root = root;
      helper(root);
    }

    void displayInorder(Node*node){
      if(node == NULL)
        return;
      displayInorder(node->left);
      cout<<node->val<<"->";
      displayInorder(node->right);
    }

    void displayTree(){
      displayInorder(this->root);
      cout<<"NULL";
    }
};




int main(){
  BinaryTree tree;
  tree.insertNode();
  tree.displayTree();

  return 0;
}