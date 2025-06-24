/*
16)write a program which accept number from user and display its multiplication of factors.
INPUT=12
OUTPUT=1*2*3*4*6

INPUT=13
OUTPUT=1

INPUT=10
OUTPUT=10  1*2*5
*/
#include<stdio.h>
int multFact(int iNo)
{
	int iCnt=0;
	int iMulti=1;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo % iCnt==0)
		{
			iMulti=iMulti*iCnt;
		}

		

	}
	return iMulti;

}
int main()
{

	int iValue=0;
	int iRet=0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);

	iRet=multFact(iValue);

	printf(" multiplication of factor is:%d\n",iRet);
	return 0;

}