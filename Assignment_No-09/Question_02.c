/*

2)write a program which accept width and height of reactangle from user and calculate its area

*/
#include<stdio.h>

double Area(float fNo1,float fNo2)
{
	double iResult=0.0;
	iResult=fNo1*fNo2;
	return iResult;
}
int main()
{

	float fValue1=0.0f;
	float fValue2=0.0f;
	double dRet=0.0;

	printf("Enter width:");
	scanf("%f",&fValue1);

	printf("Enter a height:");
	scanf("%f",&fValue2);

	dRet=Area(fValue1,fValue2);
	printf("AREA OF REACTANGLE IS:%f\n",dRet);
	return  0;
}
