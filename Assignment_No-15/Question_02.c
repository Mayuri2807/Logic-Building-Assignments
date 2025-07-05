/*

2)Accept N  numberfrom user and accept one another number as No,retrun index of first occcurce of that number
input:6
No:66
elments:85 66 3 66 93 88
output=1

input:6
No:12
elments:85 11 3 15 11 111
output=-1


*/
#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[], int iSize,int iNo)
{

	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			return iCnt;
		}
	
	}
	return -1;
	
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

    iRet=FirstOcc(ptr,iLength,iValue);
    if(iRet==-1)
    {

         printf("There is no such number");
    }
    else
    {
    	printf("First occurance of number is:%d\n",iRet);
    }
    free(ptr);
    return 0;


}
