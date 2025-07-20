/*4)write a program which accept string from user and check whether it contains voweles in it or not
input:marvellous

output:true

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{

	bool bFlag=false;
	while(*str!='\0')
	{

		if(*str=='a' || *str=='e'|| *str=='i'|| *str=='o'|| *str=='u')
		{

			bFlag=true;
			break;
		}
		str++;
	}
	return bFlag;
}

int main()
{

   char Arr[30];
	char cValue='\0';
	bool bRet=false;


	printf("Enter a string:\n");
	scanf("%[^'\n']s",Arr);

	bRet=ChkVowel(Arr);
	if(bRet==true)
	{
    printf("Contains vowel");
	}
	else
	{
	printf("There is no vowel");
	}
  
	return 0;
}
