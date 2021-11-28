#include<stdio.h>
struct students
{
	char name[10];
	int rollno;
	float marks;
};
int main()
{
	struct students s;
	int n, i;
	printf("enter the number of students in class ");
	scanf("%d", &n);
	printf("enter the name , rollno, and marks of students ");
	for(i=1; i<=n; i++)
	{
		scanf("%s %d %f", &s.name, &s.rollno, &s.marks);
	}
	for(i=1; i<=n; i++)
	{
		printf("%s %d %f", s.name, s.rollno, s.marks);
	}

	return 0;
}
