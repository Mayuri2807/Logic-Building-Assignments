/*
5)Accept number from user and Display all such elements which are multiple of 11
*/
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%11)==0)
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
