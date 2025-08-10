/*1)Write a recuri=sive program which accept String from user and count white spaces
*/

////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int WhiteSpace(char *str)
{
	 int iCount=1;

	if(*str!='\0')
	{
		if(*str=='     ')
		{
			iCount++;
		}
		str++;
		WhiteSpace(str);
	}
	return iCount;


}
int main()
{
	char Crr[30];
	int iRet=0;

	printf("Enter a string:");
	scanf("%[^'\n]s",Crr);

	iRet=WhiteSpace(Crr);
   printf("Whitespaces are:%d\n",iRet);

   return 0;
}
