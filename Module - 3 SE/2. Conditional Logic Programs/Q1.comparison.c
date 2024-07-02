//1. Write a C program to accept two integers and check whether they are equal 
//or not 
#include <stdio.h>
int main ()
{
	int num1,num2;
	printf("Enter a first integer: ");
	scanf ("%d",&num1);
	printf("Enter a second integer: ");
	scanf("%d",&num2);
	if(num1==num2){
		printf("whether is equal");
	}else {
		printf("whether are not equal");
	}
	
	
	return 0;
}


