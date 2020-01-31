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
	return;
}

bool LinkedBST::search(Node* root,int data){
	if(root->data == 0){
		return False;
	}
	elseif{
		if(data<root->data){
			search(root->left,data);
		}
		elseif(data>root->data){
			search(root->right,data);
		}
		elseif(data==root->data){
			std::cout<<data<<"found in "<<root<<std::endl;
			return True;

		}
		else{
			std::cout<<data<<" Not found"<<endl;
			return False;
		}
	}
}

void LinkedBST::preordertraversal(){
	return;
}
void LinkedBST::preordertraversal(Node* root){
	if(root->data==0){
		return;
	}
	
	cout<<root->data<<endl;
	preordertraversal(root->left);
	preordertraversal(root->right);
	
}


