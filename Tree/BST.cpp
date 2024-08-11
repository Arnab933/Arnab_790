#include<iostream>
using namespace std;

class BST {
public:
    class Node {
    public:
        int value;
        Node* left = NULL;
        Node* right = NULL;
        Node* parent = NULL;
        Node() {}
        Node(int value) {
            this->value = value;
        }
    };
    Node* root;
    BST() {
        this->root = NULL;
    }

    void insertNode(int value) {
        Node* node = new Node(value);
        if (root == NULL) {
            root = node;
            return;
        }
        Node* currNode = root;
        Node* parent = root;
        while (currNode != NULL) {
            parent = currNode; // for storing the parent node;
            if (node->value < currNode->value)
                currNode = currNode->left;
            else if (node->value > currNode->value)
                currNode = currNode->right;
            else {
                delete node; // Delete the duplicate node, not currNode
                return;
            }
        }
        node->parent = parent;
        if (node->value < parent->value)
            parent->left = node;
        else
            parent->right = node;
    }
    
    void displayInorder(Node* node) {
        if (node == NULL)
            return;
        displayInorder(node->left);
        cout << node->value << " ";
        displayInorder(node->right);
    }
    
    void displayBST() {
        displayInorder(root);
    }
};

int main() {
    BST tree;
    int arr[9] = {8, 3, 10,1, 6, 14, 4, 7, 13};
    for (int i = 0; i < 9; i++) {
        tree.insertNode(arr[i]);
    }
    tree.displayBST();
   
    return 0;
}
