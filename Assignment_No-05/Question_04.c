/*
24)Write a program wich accept N from user and print all odd numbers upto N
input=18
output=upto N

*/
#include<stdio.h>
void OddDisplay(int iNo)
{
	
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{

		if(iCnt%2!=0)
		{

			printf("%d\n",iCnt);
		}

   }
}
int main()
{
	int iValue=0;
	
	printf("Enter a number:");
	scanf("%d",&iValue);

	OddDisplay(iValue);

	return 0;
}