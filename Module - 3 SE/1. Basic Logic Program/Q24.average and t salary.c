//24. Accept 5 employees name and salary and count average and total salary
#include <stdio.h>
int main ()
{   int jignesh,piyush,hitesh,sumit,rahul,avg;
	printf("Enter a salary:-\n");
	printf("jignesh: ");
	    scanf("%d",&jignesh);
	printf("piyush: ");
		scanf("%d",&piyush);
	printf("hitesh: ");
    	scanf("%d",&hitesh);
	printf("sumit: ");
	    scanf("%d",&sumit);
	printf("rahul: ");
	    scanf("%d",&rahul);
	    
	    printf("\ntotel salary : %d",jignesh+piyush+hitesh+sumit+rahul);
	   avg=jignesh+piyush+hitesh+sumit+rahul;
		printf("\navg. salary : %d ",avg/5);
	    
	    
	
	return 0;
}
