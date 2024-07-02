//12. Accept number of students from user. I need to give 5 apples to each 
//student. How many apples are required?
#include<stdio.h>
int main (){
	int students;
	int apple=5;
		printf("Enter the number of students: ");
    	scanf("%d",&students);
  
    printf(" %d  apples are required ",apple*students);
    return 0;
	
}


