//palindrome:
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char *p, *q;
 	char a[20];
 	int flag=0;
 	printf("enter any string");
 	gets(a);
 	p=&a;
     q=p;
     while(*q!='\0')
     {
     	q++;
	 }
	 q--;
	 while(q!=p)
	 {
	 	if(*p!=*q)
	 	{
	 		flag =1;
	 		printf(" not palindrome");
	 		break;
		 }
		 p++;
		 q--; 
	 }
	 if(flag==0)
	 {
	 	printf(" palindrome");
	 }
 }
