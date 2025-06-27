/*
2)Accept amount in US doller and return its corresponding value in indian currency consider 1$ as 70 ruppees
input=10
output=700
*/
#include<stdio.h>
int DollerToINR(int iNo)
{

   int  iCnt=0;
     {
        iCnt=iNo*70;
     }
     return iCnt;

}
int main()
{

	int iValue=0;
     int iRet=0;

     printf("Enter number of USD");
     scanf("%d",&iValue);
     iRet=DollerToINR(iValue);
     printf("Value in INR %d",iRet);




     return 0;
}
