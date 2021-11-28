// swap:
#include<stdio.h>
int swap(int *x, int *y);
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("before swapping %d ,%d",x, y);
	swap(&x, &y);
}
int swap(int *a, int *b )
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("\n %d %d", *a, *b);
}
