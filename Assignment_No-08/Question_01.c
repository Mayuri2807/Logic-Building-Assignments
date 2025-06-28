/*
1)write a program accept radius of circle from user and caluclate its area
input=5.3
output=88.2026

*/
#include<stdio.h>
double CircleArea(float fRadius)
{

   float iResult=0.0f;
	iResult=3.14*fRadius*fRadius;
	return iResult;

}
int main()
{

	float fValue=0.0f;
	double dRet;

	printf("Enter a radius:");
	scanf("%f",&fValue);

	dRet=CircleArea(fValue);

	printf("Area of circle is:%f\n",dRet);
	return 0;

}
