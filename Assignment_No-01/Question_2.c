/*
5)accept one number from user and print that number of * on screen
*/
#include<stdio.h>
int Accept(int iNo1)
{
	
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo1;iCnt++)
	{
	  printf("*");
	}
}
int main()
{
	
	int iValue=0;
	iValue=5;
	Accept(iValue);
	return 0;
}