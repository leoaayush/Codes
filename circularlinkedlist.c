#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node * next;
};
struct node * insert(struct node * start)
{	struct node * tmp;
	int t;
	do{
		printf("enter the number....enter -999 to stop\n");
		scanf("%d",&t);
		if(t == -999)
		{	
			break;
		}
		else{	
			if(start==NULL)
			{	
				start=(struct node *)malloc(sizeof(struct node));
				start->data=t;
				start->next=start;
			}
			else
			{
				tmp=(struct node *)malloc(sizeof(struct node));
				tmp->data=t;
				tmp->next=start->next;
				start->next=tmp;
			}
		}	
	}while(t!=-999);
return start;
}
void print(struct node *start)
{	struct node *tmp;
	tmp=start;
	if(tmp == NULL)
	{	printf("Empty\n");
	}
	else
	{
		do{	tmp=tmp->next;
			printf("%d ",tmp->data);
			
			}while(tmp!=start);
printf("\n");	}
}		
void printsumeven(struct node * start)
{
	struct node * tmp;
	tmp=start;
	int sum;
	sum=0;
	do{
		tmp=tmp->next;
		if(tmp->data%2 == 0)
		{
			sum+=tmp->data;
		}
	}while(tmp!=start);
	printf("Sum is %d \n ",sum);
}
int main()
{
	struct node * start;
	start=NULL;
	start=insert(start);
	print(start);
	printsumeven(start);
return 0;
}
