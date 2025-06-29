/*
3)write a program which accept distance in kilometer and convert it into meter (1 kilometer=1000m)
*/
#include<stdio.h>
int KMtoMeter(int iNo)
{
	
	int iCnt=0;
	iCnt=iNo*1000;
	return iCnt;
}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter a distance");
	scanf("%d",&iValue);

	iRet=KMtoMeter(iValue);
	printf("distance in meter:%d\n",iRet);
}
