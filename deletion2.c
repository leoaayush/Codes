#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
		struct node * left;
		struct node * right;
};
struct node * getnode(int data)
{
	struct node * tmp;
	tmp=(struct node *)malloc(sizeof(struct node));	
	tmp->data=data;
	tmp->left=NULL;
	tmp->right=NULL;
}
struct node * insert(struct node * root,int data)
{
	if(root==NULL)
		root=getnode(data);
		else
		{
			if(data<=root->data)
				root->left=insert(root->left,data);
				else
					root->right=insert(root->right,data);
		}
		return root;
}
void inorder(struct node * root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
	}
struct node * delete(struct node * root,int item)
{
	struct node * tmp,*succ;
	if(root==NULL)
	{
		printf("Item missing\n");
		return root;
	}
	if(item<root->data)
		root->left=delete(root->left,item);
		else if(item>root->data)
			root->right=delete(root->right,item);
			else
			{
				if(root->right!=NULL && root->left!=NULL)
				{	succ=root->right;
					while(succ->left)
						succ=succ->left;
					root->data=succ->data;
					root->right=delete(root->right,succ->data);
			}
			else
			{
				tmp=root;
				if(root->right!=NULL)
					root=root->right;
					else if (root->left!=NULL)
						root=root->left;
						else
						{
							root=NULL;
						}
					free(tmp);
			}
			}
			return root;
}

int main()
{
	struct node * 	root;
	root=NULL;
	int n;
	printf("Enter the number of nodes");
		scanf("%d",&n);
		int i,x;
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			root=insert(root,x);
		}
		inorder(root);
		printf("\n");
		root=delete(root,5);
		inorder(root);
		return 0;
}
