//10. Write a program you have to make a summation of first and last Digit. (E.g., 
//1234 Ans: -5) 
#include<stdio.h>
int main ()
{
	int n,sum=0,ld;
	printf("Enter a number: ");
	scanf("%d",&n);
 
while(n>0){
	
	ld=n%10;
		if(n%2==1)
	sum=sum+ld;

	  n=n/10;
}
printf("%d",sum);
	return 0;
}
