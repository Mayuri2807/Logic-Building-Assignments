/*4)write a recursive function which display below pattern
input=6
output=A B C D E F
*/

////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
	static char ch='A';
	static int icount=1;

	if(icount<=iNo)
	{
		printf("%c\t",ch);
		ch++;
		icount++;
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
