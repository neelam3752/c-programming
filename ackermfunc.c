#include<stdio.h>
int ackrm(int , int);
int main()
{
	int a, m, n;
	scanf("%d %d", &m, &n);
	a = ackrm(m, n);
	printf("%d", a);
	}
 int ackrm(int m, int n)
 {
 	if(m==0)
 	return n+1;
 	if(m>0 && n==0)
 	return ackrm(m-1, 1);
 	if(m>0 && n>0)
 	return ackrm(m-1, ackrm(m, n-1));
	 }	

