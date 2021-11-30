#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i, l;
	printf("enter your string ");
	gets(a);
	puts(a);
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	printf("%d", i);
	l=i;
	 for(i=l-1; i>=0; i--)
	 {
	 	printf("\n %c", a[i]);
	 }
	
}
