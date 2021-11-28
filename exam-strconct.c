//string concatination:
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10], b[10], c[20];
	int l, len,i,j, k;
	printf("enter ist string ");
	gets(a);
	puts(a);
	printf("enter second string ");
	gets(b);
	puts(b);
	i=0;
	while(a[i]!='\0')
	{
		c[k] = a[i];
		i++;
		k++;
	}
	j=0;
	while(b[j]!='\0')
	{
		c[k] = b[j];
		j++;
		k++;
	}
	c[k] = '\0';
	puts(c);
//	strcat(a,b);
//	puts(a);
}
