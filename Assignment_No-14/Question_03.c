/*
3)Accept N number from user and cehck Whether that number contain 11 in it or not
input:6
elments:85 66 11 80 93 88 
ouput=11 is present
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool Check(int Arr[],int iSize)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]==11))
		{
			return true;
		}

	}
	return false;


}
int main()
{
	int iLength=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;
	bool bRet=false;

	printf("Enter a number of elments:\n");
	scanf("%d",&iLength);

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

    bRet=Check(ptr,iLength);
    if(bRet==true)
    {
    	printf("11 is present");
    }
    else
    {
    	printf("11 is absent");
    }
   
    free(ptr);
    return 0;

}

