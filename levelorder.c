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
void enqueue(struct node * queue[],int * front,int * rear,struct node * root,int n)
{
	if(*rear==n)
	{
		printf("Queue is full..cannot add more");
	}
	else
	{
		if(*(front)==-1)
		*front=0;
	*rear=*rear+1;	
	queue[*rear]=root;
	}
}
int is_empty(struct node * queue[],int * front,int * rear)
{
	if(*front==-1 || *front==*rear+1)
	return 1;
	else
	return 0;
}
struct node * delqueue(struct node * queue[],int * front,int * rear)
{	struct node * ptr;
	if(is_empty(queue,front,rear))
	{ptr=NULL;
printf("cannot delete..queue is empty\n");}
	else
	{
		ptr=queue[*front];
		*front=*front+1;
		
	}
return ptr;
}
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
	struct node * queue[n+1];
	struct node * tmp;	
	int front,rear;
	front=-1;
	rear=-1;
	enqueue(queue,&front,&rear,root,n);
	while(!is_empty(queue,&front,&rear))
	{
		tmp=delqueue(queue,&front,&rear);
		printf("%d ",tmp->data);
		if(root->left!=NULL)
		enqueue(queue,&front,&rear,root->left,n);
		else
		enqueue(queue,&front,&rear,root->right,n);
	}
return 0;
}
	
	

