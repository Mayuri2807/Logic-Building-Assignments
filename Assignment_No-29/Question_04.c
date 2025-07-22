/*4)write a program which accept string from user and accept one character.return index of last occurance of that character
input:marvellous multi os
     m
 output:11
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int lastChar(char *str,char ch)
{
	int index=N-1;
	int i=0;
	while(*str!='\0')
	{
		if(*str!=ch)
		{
			index=i;
		}
		str++;
		i++;
	}
	return index;
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

	iRet=lastChar(Arr,cValue);

	printf("character location is:%d\n",iRet);

	return 0;
}
