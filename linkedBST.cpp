#include"linkedBST.h"
#include<iostream>

using namespace std;

node::node(){
    data=0;
    left=right=NULL;
}

node::node(int value){
    data=value;
    left=right=NULL;
}

node::~node(){}


LinkedBST::LinkedBST(){
}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(int data){
}



bool LinkedBST::search(int data){}


void LinkedBST::add(node *root,int data){
if (root->data==0){
    root->data=data;
}else{
        if (data < root->data){
            if (!root->left){ 
                node *newnode=new node(data); 
                root->left=newnode;
            }
            else{
                add(root->left,data);
            }
        }
        else if (data > root->data){
            if (!root->right){ 
                node *newnode=new node(data); 
                root->right=newnode;
            }
            else{
                add(root->right,data);
            }
        }
    }
}

bool LinkedBST::search(node *root,int targetKey){
    if(root->data==0){
        cout<<"It is an empty tree"<<endl;
    }
    else{
        node *p=new node();
        p=root;
        while(p){
            if(targetKey>p->data){
                p=p->right;
            }
            else if(targetKey<p->data){
                p=p->left;
            }
            else if(targetKey==p->data){
                cout<<targetKey<<" is in the tree"<<endl;
                return 1;
                
            }
            else{
                cout<<targetKey<<" is not in the tree"<<endl;
                return 0;
            }
        }
    }
    cout<<targetKey<<" is not in the tree"<<endl;
    return 0;
}


void LinkedBST::preorderTraversal(node* root) { 
    if (!root) 
    return; 
  
    
    cout << root->data << "\t"; 
  
    
    preorderTraversal(root->left);  
  
    
    preorderTraversal(root->right); 
}

void LinkedBST::inorderTraversal(node* root){
	if(!root)
	return;
	
	inorderTraversal(root->left);
	
	cout<<root->data<<"\t";
	
	inorderTraversal(root->right);
	
}  

int LinkedBST::min(node *root){
	node *p = new node();
	p = root;
	while(p->left != NULL){
		p = p->left;
	}
	return p->data;
}

int LinkedBST::max(node *root){
	node *t = new node();
	t = root;
	while(t->right != NULL){
		t = t->right ;
	}
	return t->data;
}

int linkedBST::deleteBST(node *root,int dltkey){
	if(root->data == NULL){
		return 0;
	}
	if(dltkey<root->data){
		return deleteBST(root->left,dltkey);
	}
	else if(dltkey>root->data){
		return deleteBST(root->right,dltkey);
	}
	else{
		if(!root->left){
			while(root!=NULL){
				node *temp = new node();
				temp = root->right->data;
				root->right->data= root->data;
				root->data=temp;
				root = root->right;
			}
		}
		else if(!root->right){
			while(root!=NULL){
				node *temp = new node();
				temp = root->left->data;
				root->left->data= root->data;
				root->data=temp;
				root = root->left;
			}
		}
		else{
			
		}
		
	}
}



int main(){
	LinkedBST temp;

	temp.add(&temp.root,46);
	temp.add(&temp.root,19);
	temp.add(&temp.root,77);
	temp.add(&temp.root,33);
	temp.add(&temp.root,81);
	temp.add(&temp.root,51);
	cout<<"Preorder Traversal of the tree is"<<endl;
	temp.preorderTraversal(&temp.root);
	cout<<endl;
	cout<<endl;
	cout<<"Inorder Traversal of the tree is"<<endl;
	temp.inorderTraversal(&temp.root);
	cout<<endl;
	cout<<endl;
	
	cout<<temp.min(&temp.root)<<endl;
	cout<<temp.max(&temp.root)<<endl;
	
	int number;
	cout<<"Enter a number you want to search  in the tree"<<endl;
	cin>>number;
	temp.search(&temp.root,number);
	
	
	
}
