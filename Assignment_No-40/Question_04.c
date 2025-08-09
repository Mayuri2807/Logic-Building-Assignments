/*4)Write  a recursive program which accept number from user and return its factorail.
input=5
output=120

*/

///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int Fact( int iNo)
{
	if(iNo==0 || iNo==1)
	{
		return 1;
	}
	else
	{
		return iNo*Fact(iNo-1);
	}
	
 }
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number:");
	scanf("%d",&iValue);

	iRet=Fact(iValue);

	printf("%d",iRet);

	return 0;

}
