/*

5)write a program which retrun differnce between even and odd factorial of given number

*/
#include<stdio.h>
int FactorialDiff(int iNo)
{
	 int iCnt=0;
	int iSum=1;
	int iDiff=1;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	if(iCnt%2==0)
	{
		iSum=iSum*iCnt;
	}
	if (iCnt%2!=0)
	{
		iDiff=iDiff*iCnt;
	}
	return iSum-iDiff;


}
int main()

{

	int iValue=0;
	 int iRet=0;
	 printf("Enter a number");
	 scanf("%d",&iValue);

	 iRet=FactorialDiff(iValue);
	 printf("Factorial differnce is %d",iRet );
	 return 0;



}
