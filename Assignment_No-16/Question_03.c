/*
3)Accept number from user and retrun diifernce between largest and smallest number

*/
#include<stdio.h>
#include<stdlib.h>

int Differnce(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0,iMax=0;
    iMax = Arr[0];



    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >iMax)
        {
            iMax = Arr[iCnt];
        }
        else
        {
        	iMin=Arr[iCnt];
        }
    }
    return iMax-iMin;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Differnce(ptr,iLength);
    printf("Differnce is : %d\n",iRet);

    free(ptr);

    return 0;
}
