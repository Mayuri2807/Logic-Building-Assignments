/*
ACCEPT ONE CHARACTER FROM USER AND CHECK WHETHER THAT CHRACTER IS VOWEL(a,e,i,o,u,i) or not
*/

#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char cValue1)
{
	
	  char cValue1='\0';
	if(cValue1 == 'a' || cValue1 == 'e' || cValue1 == 'i' || cValue1 == 'o' || cValue1 == 'u' ||
        cValue1== 'A' || cValue1 == 'E' || cValue1 == 'I' || cValue1 == 'O' || cValue1 == 'U')
	{
	   return TRUE;
	}
	else
	{
	  return FALSE;
	}
}
int main()
{
	
	char cValue='\0';
	BOOL bRet=FALSE;

	printf("Enter a chracter:\n");
	scanf("%d",&cValue);
	bRet=ChkVowel(cValue);
	if(bRet==cValue1)
	{
	printf("It is a Vowel");
   }
   else
   {

     printf("it is not Vowel");
   }

   return 0;
}
