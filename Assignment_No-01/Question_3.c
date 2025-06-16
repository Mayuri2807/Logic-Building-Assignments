#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int check( int iNo1)
{
	if((iNo1%5)==0)
	{
	   return TRUE;
	}
	else
	{
	  return FALSE;
	}
}
int main()
{
	int iValue1=0;
	BOOL bRet=FALSE;
	printf("Enter a number:\n");
	scanf("%d",&iValue1);
	bRet=check(iValue1);
    if(bRet==TRUE)
    {
      printf("Divsible by 5");

    }
    else
    {

       printf("not divsible by 5");
    }

    return 0;


}
