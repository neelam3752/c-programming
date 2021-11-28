#include<stdio.h>
int incr(int *);
int main()
{
	int x;
	scanf("%d", &x);
	incr(&x);
	printf("%d", x);
	
}
int incr(int *a)
{
	*a = *a + 1;
	
}
