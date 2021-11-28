// switch case:
#include<stdio.h>
int main()
{
	int a, b, ans, v;
	printf("enter any two numbers ");
	scanf("%d %d", &a, &b);
	printf("enter 1 for addition, 2 for subtraction, 3 for multiplicatin, 4 for addition ");
	scanf("%d", &v);
	
switch(v)
{
	case 1:


		ans = a+b;
		break;

		case 2:
			
		
			ans = a-b;
			break;
		
			case 3:
				
	
				ans = a*b;
				break;
			
				
				case 4:
					
					ans = a/b;
					break;
				
					default:
			
						printf("invalid input");
					}
						printf("%d", ans);
						
						
						
}

