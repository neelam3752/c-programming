// display fibonacii using recursion:
// 0 1 1 2 3 5 8...
#include<stdio.h>
int fib(int);
int main()
{
	int i, n;
	printf(" Recurssion: printing fibonacii series :");
	printf("enter the value of n ");
	scanf("%d", &n);
  	 
  	for(i=0; i<n; i++)
  	{
  		
	printf("%d ", fib(i));
}
}
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fib(n-1) + fib(n-2);
}
