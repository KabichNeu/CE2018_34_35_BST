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


LinkedBST::LinkedBST(){}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(int data){
}



//bool LinkedBST::search(int data){}


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

<<<<<<< HEAD
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

void linkedBST::deleteBST(node *root,int dltkey){
	if(root->data == NULL){
		return;
	}
	else if(dltkey<root->data){
		deleteBST(root->left,dltkey);
	}
	else if(dltkey>root->data){
		deleteBST(root->right,dltkey);
	}
	else{
		if(root->left = NULL && root->right==NULL){
			delete root;
			root = NULL;
		}
		else if(root->left=NULL){
			/*
			while(root!=NULL){
				node *temp = new node();
				temp->data = root->right->data;
				root->right->data= root->data;
				root->data=temp;
				root = root->right;
			}
			*/
			node *temp = new node(root);
			root = root->right;
			delete temp;

		}
		else if(!root->right){
			/*
			while(root!=NULL){
				node *temp = new node();
				temp->data = root->left->data;
				root->left->data= root->data;
				root->data=temp;
				root = root->left;
			}
			*/
			node *temp = new node(root);
			root = root->left;
			delete temp;
		}
		else{
			/*
			while(root!=NULL){
				node *temp = new node();
				temp->data = root->left->data;
				root->left->data= root->data;
				root->data=temp->data;
				root = root->left;
			}
			*/
			node *temp = new node(root);
			temp = min(root->right);
			root->data = temp->data;
			root->right=deleteBST(root->right,temp->data);
		}

	}
=======
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
>>>>>>> 7b3b956577ef9d310cefc495215bea34019253db
}


<<<<<<< HEAD

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

	cout<<"The minimum key in tree is :"<<temp.min(&temp.root)<<endl;
	cout<<"The maximum key in tree is :"<<temp.max(&temp.root)<<endl;

	int number;
	cout<<"Enter a number you want to search  in the tree"<<endl;
	cin>>number;
	temp.search(&temp.root,number);



=======
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
>>>>>>> 7b3b956577ef9d310cefc495215bea34019253db
}

