/*
29)write a program which accept number from user and display its table
input=2 
output=2 4 6 8 10 12 14 16 18 20

*/
#include<stdio.h>
void Table(int iNo)
{

   int 	iCnt=0;
   for(iCnt=1;iCnt<=10;iCnt++)
   {

   	 printf("%d\n",iNo*iCnt);
   }
}
int main()
{

	int iValue=0;
	printf("Enter a number");
	scanf("%d",&iValue);
	Table(iValue);
	return 0;
}