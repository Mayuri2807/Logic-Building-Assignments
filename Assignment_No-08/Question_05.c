/*
5)write a program which accept area in square feet and convert it into square meter 
1 square feet=0.0929
*/
#include<stdio.h>
double SquareMeter(int iNo)
{
	double dResult=0.0;
	dResult=iNo*0.0929;
	return  dResult;
}
int main()
{

	int iValue=0;
	double dRet=0.0;
	printf("Enter area in square:");
	scanf("%d",&iValue);

	dRet=SquareMeter(iValue);
	printf("area is:%f\n",dRet);
	return 0;
}
