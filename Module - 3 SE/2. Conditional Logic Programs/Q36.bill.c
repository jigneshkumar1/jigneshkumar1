//36. Write a C program to input electricity unit charges and calculate total 
//electricity bill according to the given condition: 
//For first 50 units Rs. 0.50/unit 
//For next 100 units Rs. 0.75/unit 
//For next 100 units Rs. 1.20/unit 
//For unit above 250 Rs. 1.50/unit 
//An additional surcharge of 20% is added to the bill 

#include<stdio.h>
int main ()
{
	float units,rs,totel;
	
	printf("Enter a units: ");
	scanf("%f",&units);
     
    if (units<=50)
    {
    	rs=units*0.50;
    	//s=0.20*units;
    	
	}
	if (units<=150){
		rs=0.75*units;
	//	s=20*units;
	}
	 else if (units<=250){
		rs=1.20*units;
		//s=20*units;
	} 
	else {
			rs=1.50*units;
	//	s=20*units;
	}
	
	
	
	totel=units+rs;
	printf("totel bill %.2f",totel);
		return 0;
}
