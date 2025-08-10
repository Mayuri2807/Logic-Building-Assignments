/*2)write a recursive program which accept number from user and count number of small character.
Input=HelloWOrlD
OUTPUT=5
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    static int iCount = 0;
    
    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        CountSmall(str);
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Small count is : %d\n",iRet);

    return 0;
}
