/*
4)write a program which accept in Fahreheit and covert it into celsius(1 celseius=(Fahreheit-32)*(5/9))

*/
#include<stdio.h>
double FhtoCs(float fNo)
{
	
	double fCnt=0.0;
	fCnt=(fNo-32)*(5.0/9.0);
	return fCnt;
}
int main()
{
	
	float fValue=0.0f;
	double dRet=0.0;
	printf("Enter temp in Fahreheit:");
	scanf("%f",&fValue);
	dRet=FhtoCs(fValue);
	printf("Fahreheit to celsius:%f\n",dRet);
	return 0;

}
