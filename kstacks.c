#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void push(int num1,int num2, int a1[],int a2[],int size);

int main()
{
	char c2,c3;
	char *p1,*p2;
	int n1,n2;
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0;i < n;i ++){
		arr[i]=0;	}
	int k;
	printf("enter the number of stacks to be implemented\n");
	scanf("%d",&k);
	int c;
	int d;
	d=0;
	if(n % k == 0){
		c= n / k;
	}else{
		c=(n/k) +1;
	}
	int arrtop[c];
	for(i=0;i<n;i++){
		if(i % k == 0){
			arrtop[d++]=i;
		}
	}		
	char c4[4];
	char c1[100];
	scanf("%s",c1);
//	int j;
//	for(j = 0;j<4;j++){
//		c4[j]=c1[j];
//	}
//	if(strcmp(c4,"push")==0)

		c2=c1[5];
		c3=c1[7];
	c1[6]='2';	
	printf("%c %c\n",c2,c3);
	printf("WORKING\n");
//	p1=&c2;
//	p2=&c3;
	n1=atoi(&c2);
	n2=atoi(&c3);
//	n1=2;
//	n2=3;
	printf("%d %d\n",n1,n2);
	push(n1/10,n2,arr,arrtop,n);
	printf("WORKING1\n");
	return 0;
}

void push(int num1,int num2, int a1[],int a2[],int size)
{
	a1[a2[num1-1]]=num2;
	int g;
	for(g=0;g<size;g++){
		printf("%d ",a1[g]);
	}
}		
	
