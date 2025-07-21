/*
2)write a program which accept string from user and convert it into upper case
input:marvellous multi os
output:MARVELLOUS MULTI OS
*/
#include<stdio.h>
void StrUprX(char *Str)
{

	while(*Str!='\0')
	{

		if(*Str>='a' && *Str<='z')
		{

			*Str=*Str-32;
		}
		Str++;
	}
}
int main()
{

	char Arr[20];

	printf("Enter a string:\n");
	scanf("%[^'\n']",Arr);

	StrUprX(Arr);
	printf("String after converting :%s\n",Arr);

	return 0;
}
