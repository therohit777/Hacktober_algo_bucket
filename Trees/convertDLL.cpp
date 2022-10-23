#include<iostream>
using namespace std;

// Node structure 

struct Node{
    int key;
    Node *left, *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

// function to convert binary tree into a doubly linked list

Node *prv = NULL; // global pointer for setting previous node

Node* convert(Node *root){
    if(root == NULL){
        return root;
    }
    Node* head = convert(root->left);
    if(prv == NULL){
        head = root;
    } else {
        root->left = prv;
        prv->right = root;
    }
    prv = root;
    convert(root->right);
    return head;
}

// main code starts here 

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    Node *head = convert(root);
    return 0;
}