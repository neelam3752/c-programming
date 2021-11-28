#include<stdio.h>
int main()
{
	int a[5] = { 33, 41, 54, 99, 10};
	int i, n, flag =0;
	printf("please enter the element to be sreached ");
	scanf("%d", &n);
	for(i=0; i<5; i++)
	{
		if(n==a[i])
		{
			flag = 1;
			printf("element found at %d th location", i+1);


         }
     }
     if(flag ==0)
     {
	 
     printf("element not found ");
}
}
