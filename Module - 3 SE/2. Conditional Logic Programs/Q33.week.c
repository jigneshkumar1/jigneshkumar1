//33. WAP to input the week number and print week day. 
#include<stdio.h>
int main ()
{
	int week_number;
	printf("Enter a week_number(1-7): ");
	scanf("%d",&week_number);
	
	
	if(week_number<1 || week_number >7){
		printf("invalid week number please enter onlry 1to7 number");
	}
	else{
		switch(week_number){
			case 1:
				printf("monday");
				break;
			case 2:
				printf("tuesday");
				break;
			case 3:
				printf("wednesday");
				break;
			case 4:
				printf("thursday");
				break;
			case 5:
				printf("friday");
				break;
			case 6:
				printf("saturday");
				break;
			case 7:
				printf("sunday");
				break;
			default:
			    printf("invalid number");
				break;				
			
		}
	}
	return 0;
}
