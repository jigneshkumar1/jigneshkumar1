//16. Write a C program to read temperature in centigrade and display a suitable 
//message according to the temperature state below: 
//Temp < 0 then Freezing weather 
//Temp 0-10 then Very Cold weather 
//Temp 10-20 then Cold weather 
//Temp 20-30 then Normal in Temp 
//Temp 30-40 then Its Hot 
//Temp >=40 then Its Very Hot

#include <stdio.h>
int main ()
{
	int num;
	printf("Enter a value: ");
	scanf("%d",&num);
	
	if (num<0){
		printf("%d is freezing weather",num);
	}
	else if (num<=10){
		printf("%d very cold weather",num);
	}
	else if (num<=20){
		printf("%d its cold weather",num);
	}
		else if (num<=30){
		printf("%d normel temp.",num);
	}
		else if (num<=40){
		printf("%d its hot",num);
	}
		else if (num>40){
		printf("%d its very hot",num);
	}
	
	return 0;
}
