/*

30)write a program which accept number from user and display its table in reverse order

*/

#include<stdio.h>
void Table(int iNo)
{

   int 	iCnt=0;
   for(iCnt=10;iCnt>=1;iCnt--)
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