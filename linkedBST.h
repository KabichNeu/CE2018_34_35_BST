#include "BST.h"

class Node{
	int data;
	Node* left;
	Node* right;

	Node(){
		data =0;
		left=NULL;
		right=NUll;
	}

};
d
class LinkedBST: public BST{
	private:
		Node* root;
	public:
		LinkedBST(){
			root = 0;
		}
		void add(int data);
		void preordertraversal();
		bool search(int data);
};

