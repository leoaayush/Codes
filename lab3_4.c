#include <stdio.h>
void push(int a[],int *p);
void pop(int a[],int *q);
void top(int a[],int *r);
void sizef(int a[],int *p);
void check_is_empty(int a[],int *p);
void check_is_full(int a[],int *p);
int main()
{
	int arr[100];
	int size;
	int i;
	printf("NO. of elements you want");
	scanf("%d ",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	push(arr,&size);
	pop(arr,&size);
	top(arr,&size);
	sizef(arr,&size);
	check_is_empty(arr,&size);
	check_is_full(arr,&size);
return 0;
}	
void push(int a[],int *p)
{
	int n;
	printf("enter element ");
	scanf("%d",&n);
	if(*p == 100){
		printf("Cannot push");
	}else{
	
		*p=*p+1;
		a[*p-1]=n;
		int j;
		printf("new array\n");
		for(j=0;j<*p;j++){
			printf("%d ",a[j]);
		}
		}
}	
void pop(int a[],int *q)
{
	if(*q == 0){
		printf("Cannot POP stack underflow");
	}else{
		printf("element to be poped is %d \n",a[*q-1]);
		printf("New array is ");
		*q=*q-1;
		int j;
		for(j=0;j<*q;j++){
			printf("%d ",a[j]);
		}
		}
}
void top(int a[],int *r)
{
	if(*r == 0){
		printf(" No top element , array is empty");
	}else{
		printf("top element is %d\n",a[*r-1]);
	}
}		
void sizef(int a[],int *p)
{
	printf("Size is %d\n",*p);
}	
void check_is_empty(int a[],int *p)
{
	if(*p == 0){
		printf("true,is empty\n");
	}else {
		printf("Not empty\n");
}}
void check_is_full(int a[],int *p)
{
	if(*p == 100){
		printf("is full\n");
	}else{
		printf("Not full\n");
	}
}
		











	
