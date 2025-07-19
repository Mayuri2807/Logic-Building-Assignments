/*
5)Accept character from user and display its Ascii value in decimal octal and hexadecimal fromat.

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{

	printf("decimal:%d\n",ch);
  
	printf("octal:%o\n",ch);
  
	printf("hexadecimal:%x\n",ch);
	
}

int main()
{

	char cValue='\0';

	printf("Enter the character:");
	scanf(" %c",&cValue);
  
	Display(cValue);
  
	return 0;
  
}

