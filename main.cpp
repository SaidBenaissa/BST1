#include <iostream>

using namespace std;


struct Node {
    int data;
    Node *left;
    Node *rigth;

};

Node *getBstNode(int data) {
    Node *node = new Node();
    node->data = data;
    node->left = node->rigth = NULL;
    return node;
}

Node *Insert(Node *node, int data) {
    if (node == NULL) {
        node = getBstNode(data);
        return node;
    } else if (data <= node->data) {
        node->left = Insert(node->left, data);
    } else {
        node->rigth = Insert(node->rigth, data);
    }

    return node;
}

bool Search(Node *node, int data) {
    if (node == NULL) {
        return false;
    } else if (node->data == data) {
        return true;
    } else if (data <= node->data) {
        return Search(node->left, data);
    } else {
        return Search(node->rigth, data);

    }
}

int main() {
    Node *node = NULL;
    node = Insert(node, 10);
    node = Insert(node, 20);
    node = Insert(node, 30);
    node = Insert(node, 40);
    node = Insert(node, 50);
    node = Insert(node, 60);
   // int number;
   // cout << "Enter number of the bst\n";
    //cin >> number;
    if (Search(node, 20) == true) {
        cout << "\n node found\n";
    } else {
        cout << "node not found";
    }


}