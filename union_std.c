//union:
#include<stdio.h>
#include<string.h>
union un
{
	int rollno;
	char name[10];
	float marks;
};
int main()
{
	union un u1;
	printf("enter rollno and marks of student ");
	scanf("%d %s %f", &u1.rollno, &u1.marks);
	printf("enter name ");
	gets(u1.name);
	printf(" %d ,%f", u1.rollno, u1.marks);
	puts(u1.name);
	
}
