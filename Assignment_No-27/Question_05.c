/*
135)write a program which accept string from user and display in reverse order.

input:MarvellouS

output:SuollevraM
*/

//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
  char *p=str;
  while(*p!='\0')
  {
    	p++;
  }
  p--;
  while(p>=str)
  {
  	printf("%c\t",*p);
  	p--;
  }
}

int main()
{


	char Arr[20];
	int iRet=0;

	printf("Enter a string:\n");
	scanf("%[^'\n']s",Arr);

	Reverse(Arr);
  
	return 0;
}
