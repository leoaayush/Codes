#include <stdio.h>
int * sort(int a[100],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
return a;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		int k;
		scanf("%d %d",&n,&k);
		int A[n],B[n],r[n];
		int *b,*r1;
		int i,j,c=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}
		for(i=0;i<n;i++)
		{
		scanf("%d",&B[i]);
		}
		for(i=0;i<n;i++)
		{
			r[i]=k-A[i];
		}
		b=sort(B,n);
		r1=sort(r,n);
	//	for(i=0;i<n;i++)
	//	{
			for(j=0;j<n;j++)
			{
				if(B[j]>=r[j])
				{//	B[j]=-99;
				//	r[i]=-99;
					c++;
				//	break;
				}
			}
	//	}
		if(c==n)
		printf("YES\n");
		else
		printf("NO\n");
	}
return 0;
}

