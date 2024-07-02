 //5. WAP to print factorial of given number 
#include <stdio.h>
int main ()
{
	int num,i,f=1;

	printf("Enter any number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("factorial number of %d is %d",num,f);
	return 0;
}
