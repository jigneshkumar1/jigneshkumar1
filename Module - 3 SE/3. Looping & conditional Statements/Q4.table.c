//4. WAP to print table up to given numbers 
#include <stdio.h>
int main ()
{
int num,i;
printf("Enter any number: ");
scanf("%d",&num);
for ( i=1;i<=10;i++)
{
	printf(" %d * %d = %d\n",num,i,i*num);
	
}
return 0;
}
