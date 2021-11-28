// program to find sum of diagonal elements:
#include<stdio.h>
int main()
{
	int a[2][2] = {2  , 2, 3, 5};
	int i, j, sum=0;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			if(i==j)
			{
			sum = sum + a[i][j];
			}
			
		}
	}
		
			printf("the sum of diagonal elements = %d", sum);
	
}
