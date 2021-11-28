#include<stdio.h>
int swap(int , int);
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("before swapping: a=%d, b= %d", a, b);
  swap(a, b);
  //printf("after swapping: %d %d", swap(a,b));
}
int swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("\n  %d %d", x, y);
}

