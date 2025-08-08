/*1)write a recursive function which display below pattern
input=5
output=* * * * *
*/

////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
	static int iCount=1;

	if(iCount<=iNo)
	{
		printf("*\t");
		iCount++;
		Display(iNo);

	}

}

int main()
{
	int iValue=0;

	printf("Enter the number:");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}
