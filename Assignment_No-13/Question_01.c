/*
1)Accept N number from user and return diifernce between summation of even and odd elmemts
input:6
elements:85 66 3 80 93 88
output=53
*/
#include<stdio.h>
#include<stdlib.h>
int Differnce(int Arr[],int iSize)
{
	int iCnt=0;
	int iEven=0;
	int iOdd=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{  
			iEven=iEven+Arr[iCnt];
			
		}
		else 
		{
			
          iOdd=iOdd+Arr[iCnt];
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
