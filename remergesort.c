#include<stdio.h>
void merge(int a1[],int a2[],int lleft,int lright)
{
	int i=0,j=0,k=0;
	while(i<lleft && j<lright)
	{
		if(a1[i]<=a2[j])
		{
			arr[k]=a1[i];
			i++;
		}
		else

		{
			arr[k]=a2[j];
			j++;
		}
		k++;
	}
	if(i==lleft)
	{
		while(j!=lright)
		{
			arr[k++]=a2[j++];
		}
	}
	if(j==lright)
	{
		while(i!=lleft)
		{
			arr[k++]=a1[i++];
		}
	}
}
void mergesort(int arr[],int n)
{
	if(n<2)
		return ;
	int mid;
	mid=n/2;
	int a1[mid];
	int a2[n-mid];
	int i;
	for(i=0;i<mid;i++)
	{
		a1[i]=arr[i];

	}
	for(i=mid;i<n;i++)
	{
		a2[i-mid]=arr[i];
	}
	mergesort(a1,mid);
	mergesort(a2,n-mid);
	merge(a1,a2,arr,mid,l-mid);
}
int main()
{
	int n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Input elements");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,n);
	int c=0;
	for(c=0;c<n;c++)
	{
		printf("%d ",arr[c]);
	}
	return 0;
}
