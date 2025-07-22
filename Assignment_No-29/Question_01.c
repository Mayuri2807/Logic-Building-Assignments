/*1)write a program which accept string from user and accept one chracter.check whether is present in string or not.
input:marvellous Multi os
output:e true

input:marvellous multi os
      W
      output:false
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool ChkChar(char *str,char ch)
{
      bool bFlag=false;
      while(*str!='\0')
      {


            if(*str==ch)
            {

                  bFlag=true;
                  break;
            }
            str++;
      }
      return bFlag;


}
int main()
{

    char Arr[20];
    char cValue='\0';
    bool bRet=false;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a chracter:");
    scanf(" %c",&cValue);

    bRet=ChkChar(Arr,cValue);

    if(bRet==true)
    {

      printf("chracter found");
    }
    else
    {

      printf("character not found");
    }

    return 0;
}
