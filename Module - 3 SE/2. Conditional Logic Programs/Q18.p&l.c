//18. Write a C program to calculate profit and loss on a transaction. 
#include <stdio.h>
int main ()
{
	int c,s,p,l;
	printf("Enter a costing price: ");
	scanf("%d",&c);
		printf("Enter a selling price: ");
	scanf("%d",&s);
	if(s>c){
		p=s-c;
		printf("profit: %d",p);
	}
	else if (s<c){
		l=c-s;
		printf("loss: %d",l);
	}
	

	
	
	return 0;
}
