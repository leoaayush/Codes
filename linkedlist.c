#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

int main()
{	int k=5;
	struct node *temp;
//	start->next=NULL;
//	start->data=5;
	struct node *current;
//	current->next=NULL;
	current=NULL;
	while(k--){
	struct node * new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->next=current;
	printf("Enter element \n");
	scanf("%d",&new_node->data);
	current=new_node;}
	temp=current;
	while((temp)!=NULL){
		if(temp->next!=NULL)
		printf("%d -->",temp->data);
		else
		printf("%d",temp->data);
		temp=temp->next;
	}
return 0;
}
