// matrix:
#include<stdio.h>
int main()
{
	int a[10][10], b[10][10];
	int m , n, i, j;
	printf("enter number of rowls and columns ");
	scanf("%d %d", &m, &n);
	printf("enter elements of matrix ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	// transpose:
	printf("the transpose of above matrix is:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			b[i][j] = a[j][i];
		}
	}
		for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf(" %d ", b[i][j]);
		}
		printf("\n");
}
}
