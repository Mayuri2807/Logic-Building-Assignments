/*
1)Accept number from user and return frequency of even number.
input:6
85 66 3 80 93 88
output:3
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
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
    iRet = Frequency(ptr,iLength);
    printf("Frequency of Even number is is : %d\n",iRet);
    free(ptr);

    return 0;
}

