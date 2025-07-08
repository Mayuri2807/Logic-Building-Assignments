/*
2)Accept amount in US doller and return its corresponding value in indian currency
consider 1$ as 70
input:10
output:700
input=3
output=210
input:1200
output:84000
*/
#include<stdio.h>
int DollerToINR(int iNo)
{

	int iCnt=0;
	iCnt=70*iNo;
	return iCnt;
}
int main()
{

	int iValue=0;
	int iRet=0;

	printf("Enter a number of USD:\n");
	scanf("%d",&iValue);

	iRet=DollerToINR(iValue);

	printf("value in INR is %d",iRet);
	return 0;
}
