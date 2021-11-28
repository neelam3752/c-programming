// loops exam:
#include<stdio.h>
int main()
{
	int i, j, a, b;
	printf("enter number of rows and column");
	scanf("%d %d", &a, &b);
/*	for(i=0; i<=a; i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}*/
	for(i=0; i<a; i++)
	{
		for(j=a; j>i; j--)
		{
			printf(" * ");
		}
		printf("\n");
	}
	
}
