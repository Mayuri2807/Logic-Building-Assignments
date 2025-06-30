/*
3)Write a program which accept number from user and return addition of all numbers in between that range.(addition should be positive)
input:23 30
ouput=212
input=-10 2
ouput=invalid range

*/
#include<stdio.h>
int Rangesum(int iStart,int iEnd)
{
	int iCnt=0;
	int iResult=0;
	if (iStart <= iEnd)
	 {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
        	printf("%d",iCnt);
        	iResult=iResult+iCnt;
        }
        
     }
    elseif(iResult<0)
     {
       printf("Invalid Range");
      }
      elseif
      {
      	printf("INVALIDE RANGE");
      }
     }
    
int main()
{

	int iValue1=0;
	int iValue2=0;
	int iRet=0;

	printf("Enter a first number:");
	scanf("%d",&iValue1);

	printf("Enter a second number:");
	scanf("%d",&iValue2);

	iRet=Rangesum(iValue1,iValue2);
	printf("ADDITION IS %d",iRet);

	return 0;
}
