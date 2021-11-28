// program to add two matrix:
#include<stdio.h>
int main()
{
	int a[3][3];
	int b[3][3],  c[3][3];
	int i, j, m, n , sum =0;
	printf("please enter the elements of matrix a row_wise\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("please enter the elements of matrix b row_wise\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &b[i][j]);
			
		}
		
		}
		printf("the sum of entered matrices is: \n");
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
			
	
	  c[i][j] = 	a[i][j] + b[i][j];
	  printf("%d\n", c[i][j]);
	    
		
	}
	
	   printf("\n");
	
	   }
	   return 0;

	   	}
