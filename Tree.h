#include<stdio.h>
#include<malloc.h>
int item;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node* root=NULL;
void Preorder(struct Node *root)
{
	if (root==NULL) 
		return;
	printf ("%d -> ", root->data);
	Preorder(root->left);
	Preorder(root->right);
}
void Inorder(struct Node *root)
{
	if (root==NULL) 
		return;
	Inorder(root->left);
	printf ("%d -> ", root->data);
	Inorder(root->right);
}
void Postorder(struct Node *root)
{
	if (root==NULL)
		 return;
	Postorder(root->left);
	Postorder(root->right);
	printf ("%d -> ", root->data);
}
struct Node* insert(struct Node* root,int item)
{
	if(root==NULL)
	{
		root=(struct Node*)malloc(sizeof(struct Node));
		root->left=root->right=NULL;
		root->data=item;
	}
	else
	{
		if(item<(root->data))
			root->left=insert(root->left,item);
		else
			root->right=insert(root->right,item);
	}
	return root;
}
struct Node *find_min(struct Node * root)
{
	if(root==NULL)
		return 0;
	else if(root->left==NULL)
		return root;
	else
		return(find_min(root->left));
}

struct Node * deletee(struct Node *root,int item)
{
	struct Node*temp;
	if(root==NULL)
	{
		printf("Not found");
		return root;
	}
	else if(item<root->data)
		root->left=deletee(root->left,item);
	else if(item>root->data)
		root->right=deletee(root->right,item);
	
	else if(root->left!=NULL&&root->right!=NULL)
	{
		temp=find_min(root->right);
		root->data=temp->data;
		root->right=deletee(root->right,root->data);
	}
	else
	{
		if(root->left==NULL)
			root=root->right;
		else if(root->right==NULL)
			root=root->left;
		else if(item!=root->data)
		printf("Not found");

	}
	return root;
}
