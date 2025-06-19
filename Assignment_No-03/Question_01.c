/*
11)write a program accept one number from user and print that number of even numbers on screen
input=7
output=2 4 6 8 10 12 14

*/
#include<stdio.h>
int EVEN(int iNo)
{
	if(iNo>0)
	{
		

		{
			int iNo1=1;
			for(iNo1=1;iNo1<=iNo;iNo1++)
			printf("%d",iNo1*2);
		}
	  
	}
	else
	{
		printf("number is negative");
	}


}
int main()
{
	
	int iValue=0;
	printf("Enter a number");
	scanf("%d",&iValue);

	EVEN(iValue);
	return 0;
}