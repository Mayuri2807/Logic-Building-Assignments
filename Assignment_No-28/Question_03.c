/*
3)write a program which accept string from user and toggle the case
input:Marvellous Multi OS
output:mARVELLOUS mULTI os
*/
#include<stdio.h>
void StrtoggleX(char *str)  
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str=*str-32;
        }
        else
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{

	char Arr[20];

	printf("Enter a string:\n");
	scanf("%[^'\n']",Arr);

	StrtoggleX(Arr);
	printf("String after converting :%s\n",Arr);

	return 0;
}
