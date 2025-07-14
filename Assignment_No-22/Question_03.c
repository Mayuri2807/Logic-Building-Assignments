/*
3)Accept number of rows and columns from user and display below pattern
    input=5 5
    output=a b c d e
           1 2 3 4 5
           a b c d e
           1 2 3 4 5
           a b c d e

*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
	int i=0;
	int j=0;
	char ch='a';
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(i%2!=0)
			{
				printf("%c\t",ch);
				ch++;
			}
			else
			{

				printf("%d\t",j);
			}
		}
		printf("\n");
	}
}
int main()
{

	int iValue1=0;
	int iValue2=0;

	printf("Enter a first number:");
	scanf("%d",&iValue1);

	printf("Enter a second number:");
	scanf("%d",&iValue2);

	Pattern(iValue1,iValue2);

	 return 0;
}
