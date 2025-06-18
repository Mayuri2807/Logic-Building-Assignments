/*
 10)Acept number from user and check whether is even or odd

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL chkEven(int iNo)
{

   if(iNo%2==0)
   {
     printf("TRUE");

   }
	else
	{
	  printf("FALSE");
	}
}
int main()
{
	int iValue=0;
	BOOL bRet= FALSE;

	printf("Enter a number:\n");
	scanf("%d",&iValue);

	bRet=chkEven(iValue);

	
	return 0;
}