#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int i,f=1;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		printf("%d",f);
	}
	return 0;
}
