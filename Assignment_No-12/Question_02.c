/*
2)write a program which accept number from user and return the count of odd digits.
input=2395
output:3
input=-1018
output=2
*/
#include<stdio.h>
int OddCount(int iNo)
{
	int iCnt=0;
	int iCount=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iCnt=iNo%10;
		if(iCnt%2!=0)
		{
			iCount++;
		}
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

	iRet=OddCount(iValue);

	printf("%d",iRet);
	return 0;
}
