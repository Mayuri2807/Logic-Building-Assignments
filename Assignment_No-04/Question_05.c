/*

20)write a program which accept number from user and return differnce between summation of all factors and non factor


*/
#include<stdio.h>
int FactDiff(int iNo)
{
	
	int iCnt=0;
	int iSum=0;
	int iDiff=0;
	int iResult=0;

	for(iCnt=1;iCnt<iNo;iCnt++)
	{

       if(iNo%iCnt==0)
       {

       	iSum=iSum+iCnt;

       }
       else	
       {
       	  iDiff=iDiff+iCnt;
       }
	}
	
	
	iResult=iSum-iDiff;

}
int main()
{
	
	int iValue=0;
	int iRet=0;

	printf("Enter a number:\n");
	scanf("%d",&iValue);

	iRet=FactDiff(iValue);
	printf("%d",iRet);
	return 0;
}