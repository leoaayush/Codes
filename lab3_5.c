#include <stdio.h>
struct stack{
	unsigned int size;
	int data[100];
	};
void push(struct stack *p);
void pop(struct stack *p);
int main()
{
	struct stack a;
	printf("enter number of elements");
	scanf("%u",&(a.size));
	int i;
	for(i=0;i<( a.size);i++){
		scanf("%d",&((a.data)[i]));

}	
	
											push(&a);
	pop(&a);
	

//	int j;
//	for(j=0;j<(a.size);j++){
//		printf("%d\n",a.data[j]);
		

return 0;
}
void push(struct stack *p)
{
	if(p->size == 100){
		printf("STACK OVERFLOW");
	}else{
		int c;
		printf("enter element");
		scanf("%d",&c);
		p->data[p->size]=c;
		p->size=p->size+1;
		int j;
		printf("NEW ARRAY\n");
		for(j=0;j<(p->size);j++){
			printf("%d ",p->data[j]);
		}
	}
}
void pop(struct stack *p)
{
	if(p->size == 0){
		printf("stack Underflow");
	}else{
		printf("element to be poped is %d\n",p->data[(p->size)-1]);
		(p->size)--;	
		printf("NEW ARRAY\n");
               int j;
		 for(j=0;j<(p->size);j++){
                        printf("%d ",p->data[j]);
                }
}
}
