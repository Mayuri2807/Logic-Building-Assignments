/*2)write a program which accept string from user and accept one chracter.return frequency of that character
input:marvellous
    m
  output:  1

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(char *str,char ch)
{

	int iCount=0;
	while(*str!='\0')
	{

		if(*str==ch)
		{
			iCount++;
		}
		str++;
	}
	return  iCount;
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

	iRet=Count(Arr,cValue);

	printf("character frequency is:%d\n",iRet);

	return 0;
}
