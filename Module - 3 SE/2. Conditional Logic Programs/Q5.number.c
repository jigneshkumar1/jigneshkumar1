//5 Check Number Is Positive or Negative 
#include <stdio.h>
int main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num>0){
		printf("\n%d is positive number",num);
		
	}else if (num<0){
		printf("\n%d is negative number",num);
		
	}else{
		printf("\nyou entered value zero");
	}
		
	
	
	return 0;
}


