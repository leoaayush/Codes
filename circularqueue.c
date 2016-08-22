#include<stdio.h>
int isfull
void insert(int arr[],int * front,int *rear)
{
	if(isfull(arr,front,rear))
	{
		printf("Queue overflow....cannot be inserted");
	}
	else{

		int t;
		printf("enter the element to be inserted");
		scanf("%d",&t);
		if(*front == -1)
		{
			*front=0;
			*rear=0;
		}
		else if(*rear==9)
		{
			*rear=0;
		}
		else
		{	*rear=*rear+1;}
		arr[*rear]=t;
		}
}
		

int main()
{
	int front,int rear;
	front=-1;
	rear=-1;
	int arr[10];
	int n;
	printf("How many elements do you want to insert");
	scanf("%d",&n);
	while(n--){
	insert(arr,&front,&rear);
	}


return 0;

}
