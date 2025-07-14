/*
2)Accept number of rows and columns from user and display below pattern
input:4 4
     2 4 6 8 
     1 3 5 7 
     2 4 6 8 
     1 3 5 7 


*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{

	int i=0;
	int j=0;
	int Even=2;
    int Odd=1;
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(i%2==0)
			{
				printf("%d",Even);
				Even++;
			}
			else 
			{
				printf("%d",Odd);
				Odd++;
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
