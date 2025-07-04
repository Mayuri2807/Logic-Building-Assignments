/*
5)Accept number from user and accept one another number as No return frequency of No form it
N=6
No:66
elments:85 66 3 66 93 88
output=2
*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iSize,int iNo)
{

	int iCnt=0;
	int iCount=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{

			iCount++;
		}
	}
	return iCount;
}
int main()
{



	int iLength=0;
	int iRet=0;
	int iCnt=0;
	int iValue=0;
	int *ptr=NULL;

	printf("Enter  first   elments:\n");
	scanf("%d",&iLength);

	printf("Enter a second number:\n");
	scanf("%d",&iValue);

    ptr=(int*)malloc(iLength*sizeof(int));

    if(ptr==NULL)
    {
    	printf("unable to allocate memory");
    	return -1;
    }
    printf("Enter elments",iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
    		scanf("%d",&ptr[iCnt]);
    }

    iRet=Frequency(ptr,iLength,iValue);
    printf("%d",iRet);
     free(ptr);
    return 0;


}
