#include<stdio.h>
int isfull(int arr[],int *rear)
{
	if(*rear==9)
		return 1;
	else
		return 0;
}
void insert(int arr[],int * front,int * rear)
{
	int t;
	printf("Enter data....press -999 to stop");
	scanf("%d",&t);
	while(t!=-999)
	{
		if(isfull(arr,rear))
		{	printf("Queue Overflow\n");
				break;}
		else{
			if(*front==-1){
				arr[++(*front)]=t;
			
			++(*rear);
			
			
			}
			else
				arr[++(*rear)]=t;
		}
	scanf("%d",&t);
	}
}
void print(int arr[],int *front,int * rear)
{
		int *ptr;
		ptr=front;
		while(*ptr!=*rear)
		{
			printf("%d ",arr[*ptr]);
			(*ptr)++;
		}
		printf("%d",arr[*ptr]);
		printf("\n");
}

int main()

{
	int arr[10];
	int front=-1,rear=-1;
	insert(arr,&front,&rear);
	print(arr,&front,&rear);
return 0;
}
