//32. Accept 2 numbers and find out its sum check it size 

#include <stdio.h>
#include <limits.h>
int main()
 {
	 int num1,num2,sum;
	 
	 printf("Enter num1 : ");
      
	 scanf("%d",&num1);
	 printf("Enter num2 : ");
	 scanf("%d",&num2);
	 
	 printf("sum of num1 and num2 : %d",num1+num2);
	sum=num1+num2;
	
printf("\nsizeof %lu byte",sizeof(sum));	
	
	
	
   return 0;
}
