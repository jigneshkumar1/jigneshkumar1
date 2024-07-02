//17. Write a C program to check whether a triangle can be formed with the given 
//values for the angles. 

#include <stdio.h>
int main ()
{
	float angle1,angle2,angle3;
	
	printf("Enter a three angles: ");
	scanf("%f %f %f",&angle1,&angle2,&angle3);
	
	if (angle1+angle2+angle3==180){
		printf("The given angles can form a triangle.\n");
	}
	else {
		printf("The given angles can not form a triangle.\n");
	}
	
	
	return 0;
}
