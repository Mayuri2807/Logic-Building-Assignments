/*
4)Write a program which accept string from user and display only digits from that string
input:marve89llous121
output:8921
*/
#include<stdio.h>
void DisplayDigit(char *Str)
{

	while(*Str!='\0')
	{

		if(*Str>='0' && *Str<='9')
		{
				printf("%c",*Str);

		}
		
		Str++;
	}
}

int main()
{

	char Arr[30];

	printf("Enter a String:\n");
	scanf("%[^'\n']",Arr);

	DisplayDigit(Arr);

	return 0;
}
