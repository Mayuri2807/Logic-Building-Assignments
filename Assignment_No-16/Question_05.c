/*
5)Accept N number from user and display summation of digits of each number.
N=6
8225
output=17
*/
#include<stdio.h>
#include<stdlib.h>
void Digit(int Arr[],int iSize)
{
	int iCnt=0;
	int iDigit=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    { 
       int Num=Arr[iCnt];
        while(Num>0)
        {
            iDigit=Num%10;
        iSum=iSum+iDigit;
        Num=Num/10;
    }
    printf("Sum of digits :%d\n",iSum);
 }
}
int main()
{

	int iLength=0;
	int iCnt=0;
	int *ptr=NULL;

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

    Digit(ptr,iLength);
   
   

    free(ptr);
    return 0;

}
