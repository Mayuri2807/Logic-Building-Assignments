/*
1)Accept a program which accept string from user and count number of capital characters.
input:Marvellous Multi OS
output:4
*/
#include<stdio.h>
int CountCapital(char *str)
{

	int iCount=0;
	while(*str!='\0')
	{

		if(*str>='A' && *str<='Z')
		{

			iCount++;
		}
		str++;
	}
    
    return iCount;

}
int main()
{

	char Arr[20];
	int iRet=0;
	printf("Enter a string:\n");
	scanf("%[^'\n']s",Arr);

	iRet=CountCapital(Arr);

	printf("%d",iRet);
	return 0;

}
