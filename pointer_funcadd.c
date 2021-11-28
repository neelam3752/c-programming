// pointers and function:
#include<stdio.h>
long sum(long * , long *);
int main()
{
	int a,b, add;
	scanf("%d %d", &a, &b);
	add = sum(a, b);
	printf("the sum of %ld and %ld is %ld", a, b, add);
	
}
long sum(long *x, long *y)
{
	 long add;
	 add = *x + *y;
	 return add;
}

