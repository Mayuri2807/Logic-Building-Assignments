/*3)write a program which accept string from user and accept one character.return index of first occurance of that character
input:marvellous multi os
     m
     output:2
input:marvellous
    W
 output:0
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int FirstChar(char *str,char ch)
{
	int index=0;
	while(*str!='\0')
	{
		if(*str==ch)

		{

		   return index;
		}
		str++;
		index++;
}
	return -1;

}

int main()
{
	char Arr[20];
	char cValue='\0';
	int iRet=0;

	printf("Enter a string:");
	scanf("%[^'\n']",Arr);

	printf("Enter a character:");
	scanf(" %c",&cValue);

	iRet=FirstChar(Arr,cValue);

	printf("character location is:%d\n",iRet);

	return 0;
}
