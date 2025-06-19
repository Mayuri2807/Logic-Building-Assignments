/*
13)write a program which accept number from user and print even factors of that
input=34
output=2 6 12 18
*/
#include<stdio.h>
void Factor(int iNo)
{
	 int iCnt=0;
	 if(iNo<=0)
	 {
	   iNo=-iNo;
	 }
	 for(iCnt=1;iCnt<=iNo;iCnt++)
	 {
	  if(iNo %iCnt==0 && iCnt%2==0)
	  {
	    printf("%d\n",iCnt);
	  }
	 }
}
int main()
{
	int iValue=0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);

	Factor(iValue);
}