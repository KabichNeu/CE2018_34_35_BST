#include "BST.h"

class Node{
	int data;
	Node* left;
	Node* right;
};
class LinkedBST: public BST{
	private:
		Node* root;
	public:
		void add(int data);
		void preordertraversal();
		bool search(int data);
};
