//7.Accept marks from user and check pass or fail
#include <stdio.h>
int main (){
	int marks;
	printf("Enter a number: ");
	scanf("%d",&marks);
if(marks>35&&marks<=100){
	printf("pass");
	
}else if(marks>100){
	printf("entered onley 0 to 100 value");
	
}else{
	printf("fail");
}
	

	return 0;
}
