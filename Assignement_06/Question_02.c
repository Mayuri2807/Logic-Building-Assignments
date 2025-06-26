/*
27)Accept singl digit from user and print it into word
*/
#include<stdio.h>
void Display(int iNo)
{
	
	if(iNo>0)
	{

	   printf("%d",iNo);
	}
	else if(iNo<0)
	{

	     printf("%d",iNo);
	}
	else if
	{

         printf("number is invalid");
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