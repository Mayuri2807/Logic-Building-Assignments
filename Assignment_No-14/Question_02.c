/*
2)Accept number from user and retrun Differnce between frequecny off even and odd number
input:7
85 66 3 80 93 88 90
output=1
*/
#include<stdio.h>
#include<stdlib.h>
int Differnce(int Arr[],int iSize)
{
	int iCnt=0;
	int iEven=0;
	int iOdd=0;
	int iCount=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{  
			iEven=iCount++;
			
		}
		else 
		{
			
          iOdd=iCount++;
		}
	}
	return iEven-iOdd;
}
int main()
{

      int iLength=0;
      int iCnt=0;
      int iRet=0;
      int *ptr=NULL;

	printf("Enter number of elments:\n");
	scanf("%d",&iLength);
    
    ptr=(int*)malloc(iLength*sizeof(int));

    if(ptr==NULL)
    {
    	printf("Unable to allocate memory");
    	return -1;
    }
    printf("Enter the elments:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
    	scanf("%d",&ptr[iCnt]);
    }
    iRet=Differnce(ptr,iLength);
    printf("Result is :%d\n",iRet);

    free(ptr);
    return 0;
}
