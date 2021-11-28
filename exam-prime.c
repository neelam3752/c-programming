// prime numbers:
#include<stdio.h>
int prime(int);
int main()
{
	int n;
	scanf("%d", &n);
	prime(n);
	if(n==1)
	printf("neither  prime nor composite");
	
	
}
int prime(int n)
{
	int i, flag=0;
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			flag=1;
			printf("not prime");
			break;
		}
}
     if(flag==0)
		printf("prime");
	}
