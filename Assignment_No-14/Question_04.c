/*
4)Accept N number from user and retrun frequency of 11 form it
input=6
85 66 3 15 93 88
ouput=0
input:85 11 11 31 54 4
ouput=2
*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iSize)
{

	int iCnt=0;
	 int iFreq=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			iFreq++;
		}
	}
	return iFreq++;
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
    printf("Frequency of number is : %d\n",iRet);
    free(ptr);

    return 0;
}

