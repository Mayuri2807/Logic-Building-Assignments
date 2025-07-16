/*
5)Accept number of rows and number of column from user and display below pattern
   output: 1 2 3  4
             2 3  4 
               3  4 
                  4             
*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
	int i=0;
	int j=0;
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(i==j || i<j)
			{
				printf("%d\t",j);
			}
			else
			{
				printf(" \t");
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
