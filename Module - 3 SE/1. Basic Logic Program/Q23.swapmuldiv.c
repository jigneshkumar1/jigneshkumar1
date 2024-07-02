 //23 WAP to calculate swap 2 numbers with using of multiplication and division. 
#include <stdio.h>
int main (){
    
    int a,b,temp;
     printf("Enter a two number : ");
    scanf("%d %d",&a,&b);
   

     printf("\nmltiplication :%d",a*b);
     printf("\ndivision : %d",a/b);
   //swaping number   
       temp=a;
       a=b;
       b=temp;
    printf("\nswaping number : %d %d",a,b);
    
    
    return 0;
}
