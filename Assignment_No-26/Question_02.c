/* 2)Accept character from user.if character is small display its corresponding captial character,and if it small then display its corresponding captical character,
in another case display as it is.

input=Q
output=q

input=m
output=M

input=4
output=4
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 




#include<stdio.h>
void Display(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		printf("%c\n",ch+32);
		
	}
	else if(ch>='a' && ch<='z')
	{

		printf("%c\n",ch-32);
	}
	else
	{

		printf("%c",ch);
	}

}



int main()
{

	char cValue='\0';

	printf("Enter the character:");
	scanf("%c",&cValue);
  
	Display(cValue);
  
	return 0;

  
}





