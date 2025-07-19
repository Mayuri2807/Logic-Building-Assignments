/*3)Accept character from user.if it is captial then display all the character from the input character till Z.if input character is small then print all the character in reverse order till a
.In other case retrun directly. 

*/


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>


void Display(char ch)
{
	
  if(ch>='A' && ch<='Z')
    {
    	while(ch<='Z')
    	{
    		printf("%c\t",ch);
    		ch++;
    	}
    }
	else if(ch>='a' && ch<='z')
	{
		while(ch>='a')

		{
			printf("%c\t",ch);
		    ch--;
	    }

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



