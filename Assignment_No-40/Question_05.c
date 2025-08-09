/*5)write a program which accept number from user and return its product of digits.
input:523
output:30
*/

/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Mult(int iNo)
{
	static int iMult=1;
	if(iNo!=0)
	{
		iMult=iMult*(iNo%10);
		iNo=iNo/10;
		Mult(iNo);
	}
	return iMult;


}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number:");
	scanf("%d",&iValue);

	iRet=Mult(iValue);

	printf("%d",iRet);

	return 0;

}
