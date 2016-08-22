#include <stdio.h>
int sum (int a[],int size);
int main()
{
	int n;
	int p;
	p=0;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);}
	int c;
	c=n%3;
	if(c==0){
		p=0;
	}else if(c==1){
		p=arr[n-1];	
		n=n-1;
	}else{
		p=arr[n-1]*arr[n-2];
		n=n-2;
	}
	
	printf("%d",p+sum(arr,n-1));
return 0;
}
int sum (int a[],int size)
{	
	if(size<0){
	return 0;
	}
	return (a[size]*a[size-1]*a[size-2] + sum(a,size-3));
}	
		
