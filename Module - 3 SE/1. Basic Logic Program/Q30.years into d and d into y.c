//30. WAP to convert years into days and days into years
#include <stdio.h>
int main ()
{
	int years;
	printf("Enter a years : ");
	scanf("%d",&years);
	printf("years into days %d",years*365);
	int days;
	printf("\nEnter a days: ");
	scanf("%d",&days);
	printf("\ndays into years %d",days/365);
	
	return 0;
	
	
	}
