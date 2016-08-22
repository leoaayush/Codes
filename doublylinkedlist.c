#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
	struct node * prev;
	};
struct node * insert(struct node * start)
{	struct node * tmp,*p;
	int t;
	do{
		printf("enter the value to be inserted...enter -999 to stop\n");
		
		scanf("%d",&t);
		
	
	if(t==-999)
	{	break;}
	else{	
		if(start == NULL)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->data=t;
			tmp->next=NULL;
			tmp->prev=NULL;
			start=tmp;
		}
		else
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->data=t;
			p=start;
			while(p->next!=NULL)
				p=p->next;
			
			p->next=tmp;
			tmp->next=NULL;
			tmp->prev=p;
		}}
	}while(t!=-999);
return start;
}
void print(struct node * start)
{
	do
	{
		printf("%d ",start->data);
		start=start->next;
		
	}while(start!=NULL);
}
int main()
{
	struct node * start;
	start= NULL;
	start=insert(start);
	print(start);
	return 0;
}
