/*
5)Accept number of rows and columns from user and display below pattern
input=3 4
       1 2 3 4 
       5 6 7 8
       9 10 11 12
*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{

       int i=0;
       int j=0;
       int iCount=1;
       for(i=1;i<=iNo1;i++)
       {
       	for(j=1;j<=iNo2;j++)
       	{
       		printf("%d\t",iCount);
       		iCount++;
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
