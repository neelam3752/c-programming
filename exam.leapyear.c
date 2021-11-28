// leap year:
#include<stdio.h>
int main()
{
	int year;
	scanf("%d", &year);
	if( year %4==0 && year %100!=0)
	printf("enterted year is leap year");
	else if(year%400==0)
	printf("entered year is a leap year");
	else
	printf("not a leap year");
}
