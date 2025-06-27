/*
3)write a program to find even factorail of given number

*/
#include<stdio.h>
int EvenFactorial(int iNo)
{

	int iCnt=0;
	int iResult=1;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	if(	iCnt%2==0)
	{
	   iResult= iResult * iCnt;
		
    }
	return iResult;
}
int main()
{

    int iValue=0;
    int iRet=0;
    printf("Enter a number:");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);

    printf("even factorial of number is%d",iRet);
    return 0;


}
