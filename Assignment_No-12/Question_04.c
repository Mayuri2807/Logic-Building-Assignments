/*
4)write a program which accept number from user an return multiplication of all digits.

input=2395
output=270

*/
#include<stdio.h>
int Multi(int iNo)
{

	int iCnt=0;
	int iCount=1;
	while(iNo>0)
	{

		iCnt=iNo%10;
		iCount=iCnt*iCount;
		iNo=iNo/10;
	}
	return iCount;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter a number:");
	scanf("%d",&iValue);

	iRet=Multi(iValue);

	printf("%d",iRet);
	return 0;
}
