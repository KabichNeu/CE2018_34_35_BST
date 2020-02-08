#include <iostream>
#include "BST.h"

class node
{
public:
    int data;
    node* left ;
    node* right;
    node();
    node(int);
    ~node();
};


class LinkedBST:public BST{
    
    public:
    node root;
    LinkedBST();
    ~LinkedBST();
    void preorderTraversal(node *root);
    void add(int data);
    void add(node *root,int data);
    bool search(int data);
    bool search(node *root,int targetKey);
    void inorderTraversal(node *root);
    int min(node *root);
    int max(node *root);
    void deleteBST(node *root,int dltkey);
};
