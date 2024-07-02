//34. Accept month number and display month name

#include<stdio.h>
int main ()
{
	int month_number;
	printf("Enter a month_number:  ");
	scanf("%d",&month_number);
	
	if(month_number <1 || month_number>12)
	{
		printf("invalid number Enter a valid number 1to12 ");
	}
	else {
		switch (month_number){
			case 1:
			    printf("january");
			    break;
			case 2:
			    printf("february");
			    break;
			case 3:
			    printf("march");
			    break;
			case 4:
			    printf("april");
			    break;
			case 5:
			    printf("may");
			    break;
			case 6:
			    printf("june");
			    break;
			case 7:
				
			    printf("july");
			    break;
			case 8:
			    printf("august");
			    break;
			case 9:
			    printf("september");
			    break;
			case 10:
			    printf("october");
			    break;
			case 11:
			    printf("november");
			    break;
			case 12:
			    printf("december");
			    break;
			default:
			    printf("Enter a valid number ");
			    break;
														    
		}
		
		
	}
	
	return 0;
}
