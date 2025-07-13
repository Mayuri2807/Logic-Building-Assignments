/*
2)Accept number of rows and columns from user and display below pattern
input=4 4 
    A B C D
    a b c d
    A B C D
    a b c d
*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{

       int i=0;
       int j=0;
       char ch='a';
       char ch1='A';
       for(i=1;i<=iNo1;i++)
       {
              for(j=1,ch='a',ch1='A';j<=iNo2;j++)
              {
              	if(i%2==0)
              	{
              		printf("%c\t",ch);
              		ch++;
              	}
              	else
              	{
              		printf("%c\t",ch1);
              		ch1++;
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
