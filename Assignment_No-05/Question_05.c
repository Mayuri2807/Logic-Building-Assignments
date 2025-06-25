/*
25)write a program which accept N and print 5 multiples of N
INPUT=4
OUTPUT=4 8 12 16 20
*/
#include<stdio.h>
void MultipleDisplay(int iNo)
{

	 int iCnt=0;
	 int iResult=0;
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		iResult=iCnt*iNo;
		printf("%d",iResult);
	}
}
int main()
{

	int iValue=0;
	printf("Enter a number:");
	scanf("%d",&iValue);
	MultipleDisplay(iValue);
	return 0;
}
