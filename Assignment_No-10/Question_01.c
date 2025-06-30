/*
1)write a program which aacept rangr from user and display all numbers in between that range
input:23 35
ouput:23 24 25 26 27 28 29 30 31 32 33 34 35 
*/
#include<stdio.h>
void RangeDisplay(int iNo1,int iNo2)
{
    int iCnt=0;
	 if(iNo1<=iNo2)
		{
			for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
			{
				printf("%d\n",iCnt);
			}
			
		}
		else
		{
			printf("INVALID NUMBER");
		}
}
int main()
{

	int iValue1=0;
	int iValue2=0;

	printf("Enter a first number:");
	scanf("%d",&iValue1);

	printf("Enter a second number:");
	scanf("%d",&iValue2);

	RangeDisplay(iValue1,iValue2);

	return 0;
}
