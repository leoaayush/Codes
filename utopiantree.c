#include<stdio.h>
int main()
{
int t,c,j;
scanf("%d",&t);
int a[t];
int i;
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
}
c=1;
for(i=0;i<t;i++)
{
for(j=0;j<a[i];j++)
{
if(j%2==0)
{c=2*c;
}
else
{
c++;
}
}
printf("%d\n",c);
c=1;
}
}


