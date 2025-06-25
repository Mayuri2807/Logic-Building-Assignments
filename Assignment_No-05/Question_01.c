/*
21)Write a program which accept number from user and print that number of $ & * on screen
input=5
output= $ * $ * $ * $ * $ *
 
*/

#include<stdio.h>
void pattern(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	if(iCnt%2!=0)
	{
	  printf("$");

	}
	else 
	{
	  printf("*");
	}
}

int main()
{
	
	int iValue=0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	pattern(iValue);
	return 0;
}