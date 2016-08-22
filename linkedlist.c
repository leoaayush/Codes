#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
struct node * insert(struct node * head)
{	int t;
	struct node * tmp,* start;
	do
	{

	
		
			printf("Enter the number to be inserted\n");
			printf("Enter -999 to end the linked list\n");
			scanf("%d",&t);
			if(t== -999)
			break;
			else
			{	
				if(head==NULL)
				{
					head=(struct node *)malloc(sizeof( struct node *));
					head->data=t;
							head->next=NULL;
					start=head;			
	}

				else
				{		
				tmp=head;
				head=(struct node *)malloc(sizeof(struct node*));
				head->data=t;
				head->next=NULL;
				tmp->next=head;
				}
			}
	}while(t!=-999);
return start;
}

void print(struct node *head)
{
	struct node * i;
	for(i=head;i!=NULL;i=i->next)
	{
		if(i->next == NULL)
		{
			printf("%d",i->data);
		}
		else
		printf("%d--->",i->data);
	}
printf("\n");
}
struct node * deleteodd( struct node * head)
{	struct node * start;
	head=head->next;
	start=head;
	do
	{
		head->next=(head->next)->next;
		head=head->next;
	}while((head->next)->next != NULL);
	head->next=NULL;

return start;
}
struct node * reverse ( struct node * head)
{
	struct node * prev, * ptr,* nextn;
	prev=NULL;
	ptr=head;
	
	while(ptr!=NULL)
	{	nextn=ptr->next;
		ptr->next=prev;
		prev=ptr;
		ptr=nextn;
	}
	head=prev;
return head;}
struct node * insertionsort( struct node * head)
{
	struct node * ptr,*start,*i;
	int temp;
	start=head;
	head=head->next;
	while(head!= NULL)
	{
		ptr=start;
		for(i=ptr;i!=head;i=i->next)
	{	
		if(head->data < i->data)
		{
			temp=i->data;
			i->data=head->data;
			head->data=temp;
			
		}}
		head=head->next;
	}
return start;}	
int main()
{
	struct node * head;
	head=NULL;
	head=insert(head);
	print(head);
//	head=deleteodd(head);
//	print(head);
//	head=reverse(head);
//	print(head);
	head=insertionsort(head);
	print(head);
return 0;


}	
