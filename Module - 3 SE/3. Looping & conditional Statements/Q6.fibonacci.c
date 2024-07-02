//6. WAP to print Fibonacci series up to given numbers
#include <stdio.h>
int main ()
{
	int num,i,a=0,b=1,c;

	printf("Enter any number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	
	return 0;
}
