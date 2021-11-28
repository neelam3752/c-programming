// dynamic memory allocation:
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p, n, i;
	int *q;
	printf("enter the no of elements in integer array ");
	scanf("%d", &n);
	p= malloc(sizeof(int)*n);
	q=p;
  printf("enter the elements of array ");
  for(i=0; i<n; i++)
  {
  	scanf("%d", p);
  	p++;
  }
  
  //while(*q!='\0')
  for(i=0; i<n; i++)
  {
  	 printf("%d", *q);
  	q++;
  }
  free(p);
  free(q);
   
  
  
}
