/*
2)Acceptp number from user and Display below pattern
input:5
output: 5 # 4 # 3 # 2 # 1 #
*/
#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt=0;

	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
       printf("%d\t#\t",iCnt);
	    
	}
	printf("\n");

		
}
int main()
{

	int iValue=0;

	printf("Enter a number:");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0;
}
