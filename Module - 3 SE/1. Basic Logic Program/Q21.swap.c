//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable
#include <stdio.h>
int main ()
{
    int a,b,temp;
    
    printf ("Enter a two number : ");
    scanf("%d %d", &a,&b);
    
    temp =a;
    a = b;
    b = temp;
    
    printf("swaping numbers with using 3rd variable  : %d %d",a,b);  
    
    
    int c,d;
    
    printf("\nEnter a two number : ");
    scanf("%d %d", &c,&d);
     
     c = c + d;
     d = c - d;
     c = c - d;
    
     printf("swaping numbers without using 3rd variable  : %d %d",c,d); 
     
    
    

    
    return 0;
}
