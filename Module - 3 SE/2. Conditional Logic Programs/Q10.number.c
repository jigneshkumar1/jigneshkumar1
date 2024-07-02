//10. WAP to check whether a number is negative, positive or zero.
#include <stdio.h>
int main ()
{
	int num;
	printf("Enter a value: ");
	scanf("%d",&num);
	if (num>=1){
		printf("weather is positive");
	}
	 else if(num<0){
		printf("weather is negative");
	}
	  else if (num==0)
	  {
	  	printf("the number is zero");
	  }
	
	  
	
	
	return 0;
}
 
