/*
accept one number from user if number is less than 10 print "hello" otherwise "DEMO"

*/
#include<stdio.h>
void Display(int iNo)
{
	 int iCnt=0;
	iCnt=10;
	if(iCnt>iNo)
	{
		printf("HELLO");
	}
	else
	{
		printf("DEMO");
	}
}
int main()
{

	int iValue=0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;

}