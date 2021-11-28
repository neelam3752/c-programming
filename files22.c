// files:
#include<stdio.h>
int main()
{
	FILE *p;
	char a[18], b[15];
	int x;
	p= fopen("file.txt", "r");
	fscanf(p , "%s %s %d",&a, &b, &x );
	printf(p,"%s %s %s",a, b, x);
	fclose(p);
}
