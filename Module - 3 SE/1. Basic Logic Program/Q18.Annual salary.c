//18. Calculate person’s Annual salary 
#include<stdio.h>
int main() {
	int mSalary, ySalary;
	printf("Enter your monthly salary: ");
	scanf("%d",&mSalary);
	ySalary = mSalary * 12;
	printf("Annual Salary: %d",ySalary);
}
