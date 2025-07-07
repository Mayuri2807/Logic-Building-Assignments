/*
4)write a program which accpet number from user and print all odd upto N
input:18
ouput:1 3 5 8 9 11 13
*/
#include<stdio.h>
void Display(int iNo)
{

	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{

		if(iCnt%2!=0)
		{
			printf("%d\t",iCnt);
		}
		
	}
}
int main()
{

	int iValue=0;

	printf("Enter a number:");
	scanf("%d",&iValue);

	Display(iValue);
	return 0;
}
