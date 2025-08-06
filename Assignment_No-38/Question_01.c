/*1)write a recursive program which display below pattern
output: * * * * *
*/

/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayR()
{
    static int  iCnt = 1;   

    if( iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        DisplayR();     
    }
}

int main()
{
    DisplayR();

    return 0;
}
