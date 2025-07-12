/*
3)Accept number of rows and columns from user and display below pattern
input: 4 5
output:4 4 4 4 4 
       3 3 3 3 3
       2 2 2 2 2
       1 1 1 1 1

*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{

       int i=1;
       int j=1;
       for(i=iNo1;i>=1;i--)
       {
              for(j=iNo2;j>=1;j--)
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
