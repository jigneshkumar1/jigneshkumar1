//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
int main ()
{
	int n,sum=0,ld;//id=last digit
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n>0){
	    ld=n%10;
		sum=sum+ld;
		n=n/10;
		
		
	}
	printf("sum of digits: %d",sum);
	return 0;
}
