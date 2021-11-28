#include<stdio.h>
int main()
{
	int *p, *q;
	char a[10] = "apple";
	p=a;
	q=p;
	while(*q!='\0')
	{
		q++;
	}
	while(q!=p)
	{
		q--;
	printf("%c", *q);
		
	}
	
}
