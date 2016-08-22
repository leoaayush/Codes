#include <stdio.h>
int fib(int);
int main()
{
	int n, sum;
	scanf("%d", &n);
	sum = fib(n);
	printf("%d\n", sum);
	return 0;
}
int fib(int n)
{
	int sum;
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	sum = fib(n - 1) + fib(n - 2);
	return sum;
}
