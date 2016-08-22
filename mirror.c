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
/*
void printGivenLevel(struct node* root, int level);
int height(struct node* node);*/
struct node * insert(struct node * root,int data)
{
	if(root==NULL)
		root=getnode(data);
		else
		{
			if(data<root->data)
				root->left=insert(root->left,data);
			else if(data>root->data)
				root->right=insert(root->right,data);
		}
		return root;
}
/*
void printLevelOrder(struct node* root)
{
	    int h = height(root);
	        int i;
		    for (i=1; i<=h; i++)
			            printGivenLevel(root, i);
}
int height(struct node* node)
{
	    if (node==NULL)
		            return 0;
			        else
					    {
						            
							            int lheight = height(node->left);
								            int rheight = height(node->right);
									     
									             
										             if (lheight > rheight)
												                 return(lheight+1);
														         else return(rheight+1);
															     }
}
 void printGivenLevel(struct node* root, int level)
 {
	     if (root == NULL)
		             return;
			         if (level == 1)
					         printf("%d ", root->data);
						     else if (level > 1)
							         {
									         printGivenLevel(root->left, level-1);
										         printGivenLevel(root->right, level-1);
											     }
 }*/
 void inorder(struct node * root)
 {
	 if(root==NULL)
		 return ;
		 inorder(root->left);
		 printf("%d ",root->data);
		 inorder(root->right);
		 }
void  mirror(struct node * root,struct node  * tmp)
{	
	if(root==NULL)
		return ;
	tmp=root->left;
	root->left=root->right;
	root->right=tmp;
	mirror(root->left,tmp);
	mirror(root->right,tmp);
}	
int main()
{
	struct node * root;
	root=NULL;
	int n;
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	int i,x;
	for(i=0;i<n;i++)
	{	
		scanf("%d",&x);
		root=insert(root,x);
	}
	inorder(root);
	struct node *  tmp;
	mirror(root,tmp);
	inorder(root);
//printLevelOrder(root);
	return 0;
}
