#include<stdio.h>
//void uniquerow(int a[][100],int l);
//void uniquecol(int a[][100],int l);
void uniquetot(int a[][100],int l);
int main()
{int n;
	printf("enter the size of square matrix");
	scanf("%d",&n);
	int arr[100][100];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	uniquetot(arr,n);
	return 0;}
/*
void uniquecol(int a[][100],int l)
{
	int c,d;

	for(int k=0;k<l;k++)
	{
		for(c=0;c<l;c++)
		{
			for(d=c+1;d<l;d++)
			{	if(c==0 && d==0)
				continue;
				if(a[c][k]==a[d][k])
				{
					a[d][k]=-99;
				}
				//printf("%d\n",a[1][0]);
			}
		} }
	//printf("%d\n",a[1][0]);
	for(c=0;c<l;c++)
	{
		for(d=0;d<l;d++)
		{
			if(a[d][c]!=-99)
			printf("%d ",a[d][c]);
		}
		printf("\n");
	}

}
*/
void uniquetot(int a[][100],int l)
{
        int c,d;

        for(int k=1;k<l+1;k++)
        {
                for(c=1;c<l+1;c++)
                {
                        for(d=c+1;d<l+1;d++)
                        {       if(c==1 && d==1)
                                continue;
                                if(a[c][k]==a[d][k])
                                {
                                        a[d][k]=-99;
                                }
                                //printf("%d\n",a[1][0]);
                        }
                } }
        //printf("%d\n",a[1][0]);
         for(int k=1;k<l+1;k++)
        {
                for(c=1;c<l+1;c++)
                {
                        for(d=c+1;d<l+1;d++)
                        {       if(c==1 && d==1)
                                continue;
                                if(a[k][c]==a[k][d])
                                {
                                        a[k][d]=-99;
                                }
                                //printf("%d\n",a[1][0]);
                        }
                } }
	for(c=1;c<l+1;c++)
	{
		for(d=c+1;d<l+1;d++)
		{
				
	

	 for(c=0;c<l;c++)
        {
                for(d=0;d<l;d++)
                {
                        if(a[c][d]!=-99)
                        printf("%d\n",a[c][d]);
                }
                
        }
}
                                                                                         

