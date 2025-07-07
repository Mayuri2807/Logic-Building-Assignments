/*
5)Write a program  which accept N and print first 5 multiples of N

*/

#include<stdio.h>
void Display(int iNo)
{

	int iCnt=0;
	for(iCnt=1;iCnt<=5;iCnt++)
	{

		printf("%d\n",iCnt*4);
	}
}
int main()
{

	int iValue=0;

	printf("Enter a number:");
	scanf("%d",&iValue);

	Display(iValue);


}
