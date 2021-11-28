// finding transpose of a matrix:

#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j, m,b[10][10], n;
	printf("please enter the rows and columns of a matrix");
	scanf("%d %d", &m, &n);
	printf("please enter the elements of a matrix row_wise");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	printf("the entered matrix is: \n");
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	
	// finding transpose:
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	// printing the transpose:
	printf("the transpose is: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d", a[j][i]);
		}
		printf("\n");
	}
	
	}
