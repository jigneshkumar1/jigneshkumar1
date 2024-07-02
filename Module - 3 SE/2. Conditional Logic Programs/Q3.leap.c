//WAP to check if the given year is a leap year or not. 
#include <stdio.h>

int main() {
    int i,year;
  printf("Enter a year: ");
   scanf("%d",&year);
  if(year%400==0||year%4==0&&year%100!=0){
  	     printf("year is leap year");
  }else{
  	printf("year is not leap year");
  }
    return 0;
}

