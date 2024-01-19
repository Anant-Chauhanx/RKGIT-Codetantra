/*
Problem Statement: 
Write a C program to implement Binary tree traversals using Linked list.
You have to complete the function inorder, preorder and postorder in Traversarls.c where parameters passed are the root reference’s of the binary tree T1.
*/

void inorder( struct node *root)
{    
	// write your code here to compute     
	// and print inorder traversal    
	if(root!=NULL){   	
		inorder(root->left);    	
		printf("%d ",root->data);   	
		inorder(root->right);    
	}
} 

void preorder( struct node *root){	
	// write your code here to compute     
	// and print preorder traversal    
	if(root!=NULL){   	
		printf("%d ",root->data);   	
		preorder(root->left);   	
		preorder(root->right);    
	}
}

void postorder(struct node *root){    
	// write your code here to compute     
	// and print postorder traversal    
	if(root != NULL){  	
		postorder(root->left);  	
		postorder(root->right); 	
		printf("%d ",root->data);    
	}
}
