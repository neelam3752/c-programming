#include<stdio.h>
void bsort(int a[], int);
int main()
{
	int a[50];
	int n, i, j;
	printf("enter size");
	scanf("%d", &n);
	printf("enter elements ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
	bsort(a, n);
}
void bsort(int a[], int n)
{
	int i, j, temp;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(a[j]>a[j+1])
			{//swap:
			temp = a[j];
			a[j]= a[j+1];
			a[j+1]= temp;
			}
		}
	}
	for(i=0; i<n; i++)
	printf("\n %d", a[i]);
}

