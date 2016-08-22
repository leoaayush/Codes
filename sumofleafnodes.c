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
	return tmp;
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
void  inorder(struct node * root,int * sum)
{
	if(root==NULL)
		return ;
		inorder(root->left,sum);
		if(root->left == NULL && root->right == NULL)
		{
			*sum=*sum+root->data;
		}
		inorder(root->right,sum);
}
/*
struct node * delete(struct node * root, int item)
{
	struct node * tmp,*succ;
	if(root==NULL)
	{
		printf("data not found\n");
		return root;
	}
	if(item<root->data)
		root->left=delete(root->left,item);
	else if(item>root->data)
		root->right=delete(root->right,item);
		else
		{
			if(root->left!=NULL && root->right!=NULL)
			{
				succ=root->right;
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
					else if(root->left !=NULL)
						root=root->left;
						else
							root=NULL;
				free(tmp);
			}
		}
		return root;
}*/
int main()
{
	struct node * root;
	root=NULL;
	int n;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	printf("Enter the value of nodes");
	int i,x;
	for(i=0;i<n;i++)
	{	scanf("%d",&x);
		root=insert(root,x);
	}
	int sum=0;	
	inorder(root,&sum);
	printf("%d\n",sum);	
	//root=delete(root,5);
	//printf("\n");
	//inorder(root);
	return 0;
}
