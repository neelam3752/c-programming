#include<stdio.h>
int main()
{
	int i, a, b, c, n;
	printf("enter the size of fibonacii series ");
	scanf("%d", &n);
	a=0, b=13;
	printf("the fibonacii series are: ");
	printf("%d %d ", a, b);
	for(i=2; i<n; i++)
	{
		
		c= a+b;
	printf("%d ", c );
	a =b;
	b=c;
}
return 0;
}
