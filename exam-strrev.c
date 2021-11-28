//string reversing:
#include<stdio.h>
#include<string.h>
int main()
{
	char a[6] = "hellow";
	int i, l;
	l = strlen(a);
   i=l;
   while(i>= 0)
   {
   	printf("%c", a[i]);
   	i--;
   }
}
