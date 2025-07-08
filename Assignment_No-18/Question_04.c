/*
4)Write a program to even Factorial of given number
input:5
output:15

input:10
ouput=945

*/
#include<stdio.h>
int OddFactorial(int iNo)
{

	int iCnt=0;
	int iResult=1;
	if(iNo>=0)
	{
		iNo=-iNo;
	}
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
     	if(iCnt%2!=0)
     	{   
     		iResult=iResult*iCnt;
     		printf("%d",iResult);
     	}


     }
     return iResult;
}
int main()
{

	int iValue=0;
	int iRet=0;

	printf("Enter a number :\n");
	scanf("%d",&iValue);

	iRet=OddFactorial(iValue);

	printf("Odd factorioal is%d",iRet);
	return 0;
}
