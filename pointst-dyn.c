#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p, *q;
	int n, i;
	printf("enter size of string ");
	scanf("%d", &n);
	p = malloc(sizeof(char) * n);
	q=p;
	printf("enter string ");
	 scanf("%s", p);
	 while(*q!='\0')
	 {
	 	printf("%c", *q);
	 	q++;
	 }
	 free(p);
	 free(q);
}
