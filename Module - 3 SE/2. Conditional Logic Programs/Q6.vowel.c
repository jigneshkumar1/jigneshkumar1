//6. Find the Character Is Vowel or Not 
#include <stdio.h>
int main (){
	
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch== 'a'||ch== 'e'||ch== 'i'||ch=='o'||ch=='u'||ch== 'A'||ch== 'E'||ch== 'I'||ch=='O'||ch=='U'){
		printf("%c is vowel",ch);
		
	}else{
		printf("%c is not vowel",ch);
	}
	return 0;
}
