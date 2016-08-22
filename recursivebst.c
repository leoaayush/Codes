#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * left;
	struct node * right;
};
int search(struct node * root,int data)
{
	if(root==NULL)
		return 0;
	else{
		 if(root->data==data)
		return 1;
		else if(data<root->data)
			return search(root->left,data);
			else
				return search(root->right,data);
	}
}

struct node * newnode(int data)
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
		root=newnode(data);
		else
			{
				if(data<=root->data)
					root->left=insert(root->left,data);
					else if(data>root->data)
						root->right=insert(root->right,data);
			}
			return root;
}
int main()
{
	struct node * root;
	root=NULL;
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,5);
	root=insert(root,15);
//	printf("%d\n",root->data);
//	printf("%d\n",(root->left)->data);
	int i;
	i=search(root,56);
	if(i==1)
		printf("YES");
		else
			printf("NO");



	return 0;
}
