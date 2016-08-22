#include <stdio.h>
struct stack {
	unsigned int size;
	int data[100];
};
struct stack copy_stack(struct stack);
int main()
{
	struct stack s1;
	struct stack s2;
	printf("enter size");
	scanf("%d",&(s1.size));
	int i;
	for(i=0;i<(s1.size);i++) {
		scanf("%d",&(s1.data[i]));
	}	s2=copy_stack(s1);	
	printf("%d",s2.size);
return 0;
}
struct stack copy_stack(struct stack s1)
{
	return s1;
}
