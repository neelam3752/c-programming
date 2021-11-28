// sum of diagonal students:
#include<stdio.h>
int main()
{
	int a[3][3] = {1, 3, 6,4, 12, 7, 2, 8,9 };
	int i, j, sum;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i==j)
			{
				sum = sum+ a[i][j];
			}
		}
	}
	printf("%d", sum);
	}
