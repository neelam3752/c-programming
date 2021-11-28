// function armstrong:
#include<stdio.h>
int arm(int n);
int main()
{
	int n;
	scanf("%d", &n);
	arm(n);
}
int arm(int n)
{
	int temp, r, sum=0;
	temp = n;
	while(n>0)
	{
		r = n%10;
		sum = sum +(r*r*r) ;
		n = n/10;
	}
	if(sum==temp)
	
		printf("armstrong number");
		else
		
		printf("not an armstrong number");
		return 0;
}

