#include<stdio.h>
#include<string.h>
int main()
{
	char s[100][100],tmp[100],s1[100][100];
	int l;
	printf("enter the number of names");
	scanf("%d",&l);
	for( int i=0;i<l;i++)
	{	
		
		scanf("%s",s[i]);
	}
//	for(int i=0;i<l;i++)
//	{
//	printf("%s\n",s[i]);	}
/*	int k=0;
	while(s[k]!='\0')
	{k++;
	}*/
	
	for(int i=0;i<l;i++)
	{	for(int j=i+1;j<l;j++)
		{	if(strcmp(s[i],s[j])>0)
		{strcpy(tmp,s[i]);
		strcpy(s[i],s[j]);
		strcpy(s[j],tmp);
		}	}
	}
	strcpy(s1[0],s[0]);
	int k=1;
	for(int i=1;i<l;i++)
	{
		if(strcmp(s[i],s[i-1])!=0)
		{strcpy(s1[k],s[i]);
		k++;
		}
	}
			


	for(int i=0;i<k;i++)
	{
		printf("%s\n",s1[i]);
	}	

//printf("%d",k-1);

return 0;
}
