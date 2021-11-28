// factorial using  functions:
#include<stdio.h>
int fact(int);
int main()
{
	int n;
	scanf("%d", &n);
	fact(n);
	printf("%d", fact(n));
	return 0;
}
int fact(int n)
{
  int i, fact=1;
  for(i=n; i>=1; i--)
  {
  	fact = fact*i;
  	
  }
  return fact;
}
