/*
5)write a program which accept number from user and return differnce between summation of even and odd digits
input=2395
output=-15(2-17)

*/
#include<stdio.h>
int EvenOdd(int  iNo)
{

	int iCnt=0;
	int isum=0;
	int iDiff=0;
	while(iNo>0)
	{

		iCnt=iNo%10;
		if(iCnt%2==0)
		{

			isum=isum+iCnt;
		}
		else if(iCnt%2!=0)
		{
			iDiff=iDiff+iCnt;
		}	

		iNo=iNo/10;
	}
	return isum-iDiff;	
}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter a number:");
	scanf("%d",&iValue);

	iRet=EvenOdd(iValue);
     printf("%d",iRet);

     return 0;
}
