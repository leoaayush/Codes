#include<stdio.h>
#include<stdlib.h>
struct edge
{
	int w;
	int x;
	int y;
};
struct node 
{
	int data;
	struct node * next;
	struct node * rep;
};
struct node * makeset(int val)
{	struct node * start;
	start=(struct node * )malloc(sizeof(struct node));
	start->data=val;
	start->next=NULL;
	start->rep=start;
	return start;
}
int findset(struct 
int main()
{
	int arr[6][6];
	int i,j,k=0;
	struct  edge * a[1000];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]!=0)
			{	a[k]=(struct edge *)malloc(sizeof(struct edge));
				a[k]->w=arr[i][j];
				a[k]->x=i;
				a[k]->y=j;
				k++;
			}
		}
	}
	struct node * temp;
	struct node *arrnode[100];
	tmp=NULL;
	int c=0;
	for(c=0;c<5;c++)
	{
		temp=makeset(c);
		arrnode[c]=temp;
	}
	int g,h;
	struct edge * tmp;
	for(g=0;g<5;g++)
	{
		for(h=0;h<5;h++)
		{
			if(a[h]->w > a[h+1]->w)
			{
				tmp=a[h];
				a[h]=a[h+1];
				a[h+1]=tmp;
			}
		}
	}
	
	for(g=0;g<5;g++)
	{
		x=search(a[g]->x	
			
	
	
	return 0;
}

