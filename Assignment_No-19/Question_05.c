/*
5)Accept number from user and display below pattern 
input=8
ouput= 2 4 6 8 10 12 14 16

*/

#include<stdio.h>
void Display(int iNo)
{

	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{

		printf("%d\t",iCnt*2);
	}
}
int main()
{

	int iValue=0;

	printf("Enter a number:");
	scanf("%d",&iValue);

	Display(iValue);


}
