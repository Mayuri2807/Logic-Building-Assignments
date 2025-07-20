/*3)write a program which accept number from user and return differnce between frequency of small characters and frequency of capital character.
input:MarvellouS

output:6  (8-2)

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Differnce(char *str)
{
    int iCnt=0;
	int iCount=0;
	while(*str!='\0')
	{

		if(*str>='a' && *str<='z')
		{

			iCount++;
		}
		else if(*str>='A' && *str<='Z')
		{
			iCnt++;
		}
		str++;
	}
    
    return iCount-iCnt;

}

int main()
{

	char Arr[20];
	int iRet=0;
  
	printf("Enter a string:\n");
	scanf("%[^'\n']s",Arr);

	iRet=Differnce(Arr);

	printf("%d",iRet);
  
	return 0;

}
