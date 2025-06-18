/*
9)Accept two number from user and display first number in second number of times

input=12 5
output=12 12 12 12 12

input=-2 3
output=-2 -2 -2 

input =21 -3
output=21 21 21

input=-2 0
output=0

*/
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
	int iCnt=0;
	iCnt=1;
	for(iCnt=1;iCnt>iNo,iFrequency;iNo++,iFrequency++);
	{
	  printf("%d",iNo,iFrequency);
	}
}
int main()
{
	int iValue1=0;
	int iValue2=0;

	printf("Enter a first number:\n");
	scanf("%d",&iValue1);

	printf("Enter a two number:\n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);
	 return 0;


}
