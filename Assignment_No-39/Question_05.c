/*5)write a recursive function which display below pattern
input=6
output=a b c d e f
*/

//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
	static char ch='a';
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
