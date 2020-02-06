#ifndef BST_H
#define BST_H 



class BST{
	
public: 
		virtual void add(int data)=0;
		virtual void preordertraversal()=0; 
		virtual bool search(int data)=0;
		
		
		virtual int max_e()=0;
		
		virtual int delete()=0;
		
		
};

#endif
