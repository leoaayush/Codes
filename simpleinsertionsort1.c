#include<stdio.h>
int main()
{
	int arr[]={2,5,6,4,5,6,1,2,3};
	int i,j,k;
	
	for(i=1;i<9;i++)
	{	k=arr[i];
		j=i-1;
		while(j>=0 && k<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=k;
		
		
			}

	for(i=0;i<9;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
