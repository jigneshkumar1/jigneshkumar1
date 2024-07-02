//19.3  Patterns: 
#include <stdio.h>
int main ()
{
	int i,j,k;
	for(i=1; i<=9;i++)
	{
		for(j=5;j>i;i--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("/n");
	}
	return 0;
 } 


