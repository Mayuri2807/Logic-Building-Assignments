/*
5)Accept number of rows and columns from user and display below pattern
input=3 4
output=1 1 1 1 1
       2 2 2 2 2
       3 3 3 3 3
       4 4 4 4 4


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
                     printf("%d\t",i);
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
