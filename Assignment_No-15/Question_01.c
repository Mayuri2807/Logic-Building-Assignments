/*
1)Accept N number from user and accept one another as No check Whether No is present or not.
N=6
No:66
elments:85 66 3 66 93 88
output=true
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool Check(int Arr[],int iSize,int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{

		if(Arr[iCnt]==iNo)
		{
			return  true;
		}
		
	}
			
    return false;
}
int main()
{
	int iLength=0;
	int iValue=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;
	bool bRet=false;

	printf("Enter a number of elments:\n");
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

    bRet=Check(ptr,iLength,iValue);
    if(bRet==true)
    {
    	printf("number is present");
    }
    else
    {
    	printf("  number is absent");
    }
   
    free(ptr);
    return 0;

}

