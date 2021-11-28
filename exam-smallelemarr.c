// smallest element in an array:
#include<stdio.h>
int main()
{
	int a[5] = { 2, 3, 44, 6, 1};
	int i, largest, pos;
	largest = a[0];
	for(i=0; i<5; i++)
	{
		if(a[0]<a[i])
{
	largest = a[i];
	pos = i;
	}	}
	printf("%d is largest", largest);
	printf("\n position of largest element is %d", pos+1);

}
