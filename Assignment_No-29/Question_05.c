/*5)write a program which accept string from user revrese that string in place 
input:abcd
output:dcba
*/
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Reverse(char *str)
{
    char *start=str;
    char *end=str;

    char temp='\0';

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("String after reversal : %s\n",Arr);

    return 0;
}
