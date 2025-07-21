/*
1)write a program which accept string from user and convert it into lower case
input:Marvellous Multi OS
output:marvellous multi os
*/
#include<stdio.h>
void StrLwrX(char *Str)
{

	while(*Str!='\0')
	{

		if(*Str>='A' && *Str<='Z')
		{

			*Str=*Str+32;
		}
		Str++;
	}
}
int main()
{

	char Arr[20];

	printf("Enter a string:\n");
	scanf("%[^'\n']",Arr);

	StrLwrX(Arr);
	printf("String after converting :%s\n",Arr);

	return 0;
}
