/*
1)Accept number of rows and columns from user and display below pattern
input:4 4
output:A B C D
       A B C D
       A B C D
       A B C D


*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{

       int i=0;
       int j=0;
       char ch='A';
       for(i=1;i<=iNo1;i++)
       {
              for(j=1,ch='A';j<=iNo2;j++)
              {
                     printf("%C\t",ch);
                     ch++;
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
