/*
4)Accept N number from user and accept range Display aal elements from that range
N=6
start=60
end=90
elments=85 66 3 76 93 88
output=66 76 88
*/

#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iSize,int iStart,int iEnd)
{

	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{

		if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
		{

			printf("%d\n",Arr[iCnt]);
		}
	}
}
	

int main()
{



	int iLength=0;
	int iRet=0;
	int iCnt=0;
	int iValue1=0;
	int iValue2=0;
	int *ptr=NULL;

	printf("Enter  first   elments:\n");
	scanf("%d",&iLength);

	printf("Enter a second number:\n");
	scanf("%d",&iValue1);

	printf("Enter a third number:\n");
	scanf("%d",&iValue2);

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

    Range(ptr,iLength,iValue1,iValue2);
    
    free(ptr);
    return 0;


}
