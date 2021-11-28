#include<stdio.h>
int main()\
{
	FILE *p;
	char a[10], b[10], c[10];
	int i;
	p = fopen("file.txt", "r");
	fscanf(p,"%s %s %s %d",&a, &b, &c, &i);
    	fprintf( "%s %s %s %d", a ,b ,c ,i );
	fclose(p);
}
