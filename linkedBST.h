#include "BST.h"
#include<iostream>

class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(){
		data =0;
		left = NULL;
		right = NULL;
	}
	Node(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}

	~Node(){}
};

class LinkedBST: public BST{
	public:
		Node root;
		LinkedBST(){
			root = 0;
		}
		~LinkedBST(){}
		void add(int data);
		void add(Node* root, int data);
		void preordertraversal();
		void preordertraversal(Node* root);		
		bool search(int data);
		bool search(Node* root,int data);

};

