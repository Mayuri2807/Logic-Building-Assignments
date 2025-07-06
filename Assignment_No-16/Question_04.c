/*
4)accept number from user and display such number wich contains 3 digit in it.
N=6
8225 665 3 76 953 858
output:665 953 858
*/
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{

		if(Arr[iCnt]>=100 && Arr[iCnt]<=999)
		{
			printf("%d\n",Arr[iCnt]);
		}
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

    Display(ptr,iLength);
   
   

    free(ptr);
    return 0;

}
