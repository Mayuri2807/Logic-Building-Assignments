/*
1)write a program which accept number from user and print $ and * on screen 
input:5
output:$ * $ * $ * $ * $ *

*/
#include<stdio.h>
void Display(int iNo)
{

	int iCnt=0;
	for(iCnt=1;iCnt<=iNo*2;iCnt++)
	{

		if(iCnt%2==0)
		{
			printf("*\t");
		}
		else
		{
			printf("$\t");
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
