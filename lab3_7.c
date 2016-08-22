#include <stdio.h>
#include <stdlib.h>
struct stack {
	size_t size;
	size_t capacity;
	int *arr;
};
void create(struct stack *);
void push(int, struct stack *);
void show(struct stack *);
void pop(struct stack *);
int main()
{
	struct stack s1, *ptr;
	ptr = &s1;
	create(ptr);
	push(3, ptr);
	show(ptr);
	push(6, ptr);
	show(ptr);
	push(5, ptr);
	show(ptr);
	push(2, ptr);
	show(ptr);
	push(8, ptr);
	show(ptr);
	push(1, ptr);
	show(ptr);
	pop(ptr);
	show(ptr);
	pop(ptr);
	show(ptr);
	pop(ptr);
	show(ptr);
	pop(ptr);
	show(ptr);
	pop(ptr);
	show(ptr);
	pop(ptr);
	show(ptr);
	pop(ptr);
	show(ptr);
	push(1, ptr);
	return 0;
}
void create(struct stack *ptr)
{
	scanf("%zu", &ptr -> capacity);
	ptr -> size = 0;
	ptr -> arr = (int *) malloc (sizeof(int) * ptr -> capacity);
	return;
}
void push(int n, struct stack *ptr)
{
	if (ptr -> size == ptr -> capacity) {
		printf("stack overflow\n");
		return;
	}
	ptr -> arr[ptr -> size] = n;
	ptr -> size++;
}
void show(struct stack *ptr)
{
	int k;
	for (k = 0 ; k < ptr -> size ; k++) {
		printf("%d ", ptr -> arr[k]);
	}
	printf("\n");
	return;
}
void pop(struct stack *ptr)
{
	if (ptr -> size == 0) {
		printf("stack underflow\n");
		return;
	}
	printf("popped out value -------> %d\n", ptr -> arr[ptr -> size - 1]);
	ptr->size--;
	return;
}
