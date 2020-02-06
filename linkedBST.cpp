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



bool LinkedBST::search(int targetkey){
}

bool LinkedBST::search(Node* root,int targetkey){
	if(root->data == 0){
		std::cout<<"It is an empty tree"<<std::endl;
	}
	else{
		Node *p=new Node();
        p=root;
        while(p){
            if(targetkey>p->data){
                p=p->right;
            }
            else if(targetkey<p->data){
                p=p->left;
            }
            else if(targetkey==p->data){
                std::cout<<targetkey<<" is in the tree"<<std::endl;
                return 1;
                
            }
            else{
                std::cout<<targetkey<<" is not in the tree"<<std::endl;
                return 0;
            }
			}
}

void LinkedBST::preordertraversal(){
}

void LinkedBST::preordertraversal(Node* root){
	if (!root) 
		return; 
			
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

