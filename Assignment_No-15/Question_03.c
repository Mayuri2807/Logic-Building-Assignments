/*

3)Accept number from user and accept one another number as No,return index of last occurance of that number
input:6
No:66
elments:85 66 3 66 93 88
output=3

input:6
No:12
elments:85 11 3 15 11 111
output=-1

*/
#include<stdio.h>
#include<stdlib.h>
int LastOcc(int Arr[], int iSize,int iNo)
{

   int N=0;
	int iCnt=0;
	int lastindex=N-1;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			lastindex=iCnt;
			
		}
	
	}
	return lastindex;
	
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

    iRet=LastOcc(ptr,iLength,iValue);
    if(iRet==-1)
    {

         printf("There is no such number");
    }
    else
    {
    	printf("last occurance of number is:%d\n",iRet);
    }
    free(ptr);
    return 0;


}
