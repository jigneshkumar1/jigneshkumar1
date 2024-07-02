//4 WAP to make simple calculator (operation include Addition, Subtraction, 
//Multiplication, Division, modulo) using conditional statement
#include <stdio.h>

int main() {
    char operator;
    float num1,num2,ans;
    
    
    printf("Enter a opreater: (+,-,*,/,%%): ");
    scanf("%c",&operator);
    
    printf("Enter two number");
    scanf("%f %f",&num1,&num2);
    
    switch(operator){
    	case  '+':
         ans=num1+num2;
         printf("ans: %.2f",ans);
         break;
         
         	case  '-':
         ans=num1-num2;
         printf("ans: %.2f",ans);
         break;
	
       	case  '*':
         ans=num1*num2;
         printf("ans: %.2f",ans);
         break;
         
	     case '/':
          if (num2 != 0) {
              ans = num1 / num2;
                printf("ans: %.2f\n", ans);
            } else {
              printf("Error: Division by zero!\n");
         }
           break;
        case '%':
            if (num2 != 0) {
               ans = (int)num1 % (int)num2;
                printf("Result: %.2f\n", ans);
            } else {
                printf("Error: Modulo by zero!\n");
           }
           break;
        default:
           printf("Error: Invalid operator!\n");
	
	}
	
    

    
    return 0;
}

