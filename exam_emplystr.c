//structures:
#include<stdio.h>
struct employees
{
	char name[20];
	int id;
	float salary;
};
int main()
{
	struct employees e[30];
	int n,i;
	printf("enter number of employees ");
	scanf("%d", &n);
	printf("enter name, id and salary of employee ");
	for(i=1; i<=n; i++)
	{
		scanf("%s %d %f", &e[i].name, &e[i].id, &e[i].salary);
		
	}
	for(i=1; i<=n; i++)
	{
	printf("%s \n %d \n %f\n ", e[i].name, e[i].id, e[i].salary);
}
}
