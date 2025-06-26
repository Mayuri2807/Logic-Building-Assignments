/*

28)write a program to find factorial of given number

*/

#include<stdio.h>
int Factorial(int iNo)
{

	int iCnt=0;
	int iResult=1;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	
	{
		iResult=iResult*iCnt;
    }
	return iResult;
}
int main()
{

    int iValue=0;
    int iRet=0;
    printf("Enter a number:");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);

    printf("factorial is%d",iRet);
    return 0;


}