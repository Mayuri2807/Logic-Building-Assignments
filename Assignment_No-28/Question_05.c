/*
5)write a program which accept string user and count number of white spaces
input:Marvellous
output:0
input:Marvellous infosysytems
output:1
*/
#include<stdio.h>
int Countspace(char *str)
{
	int iCount=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			  iCount++;
		}
	   str++;
	   

	}
	return iCount;
}

int main()
{
	char Arr[30];
	int iRet=0;
	printf("Enter a string:");
	scanf("%[^'\n']s",Arr); 
      
     iRet=Countspace(Arr);
     printf("number of spaces are:%d\n",iRet) ;
	return 0;
}
