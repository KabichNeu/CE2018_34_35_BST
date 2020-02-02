#include "linkedBST.h"
#include <iostream>

void LinkedBST::add(int data){
}

void LinkedBST::add(Node* root,int data){
	if(root->data == 0){
		root->data = data;
	}
	else
	{
		if(data< root->data){
			if(root->left == NULL){
				Node* newNode = new Node();
				newNode->data=data;
				root->left=newNode;
			}
			else{
				add(root,data);
		}
			
		}
		
		else if(data> root->data){
			if(root->right == NULL){
				Node* newNode = new Node();
				newNode->data=data;
				root->right=newNode;
			}
			
		}
		else{
			add(root,data);
		}
	}
	
}



bool LinkedBST::search(int data){
}

bool LinkedBST::search(Node* root,int data){
	if(root->data == 0){
		return 0;
	}
	else{
		if(data<root->data){
			search(root->left,data);
		}
		else if(data>root->data){
			search(root->right,data);
		}
		else if(data==root->data){
			std::cout<<data<<"found in "<<root<<std::endl;
			return true;

		}
		else{
			std::cout<<data<<" Not found"<<std::endl;
			return false;
		}
	}
}

void LinkedBST::preordertraversal(){
}

void LinkedBST::preordertraversal(Node* root){
	if(root->data==0){}
	
	std::cout<<root->data<<std::endl;
	preordertraversal(root->left);
	preordertraversal(root->right);	
}

int main(){
	LinkedBST temp;
	temp.add(&temp.root,7);
	temp.add(&temp.root,2);
	temp.add(&temp.root,4);
	temp.add(&temp.root,5);
	temp.add(&temp.root,6);
	temp.add(&temp.root,8);
	temp.add(&temp.root,1);
	temp.add(&temp.root,9);
	std::cout<<"After pre-order traversal"<<std::endl;
	temp.preordertraversal(&temp.root);
	std::cout<<"For searching:"<<std::endl;
	temp.search(4);
	temp.search(3);
	return 0;
}

