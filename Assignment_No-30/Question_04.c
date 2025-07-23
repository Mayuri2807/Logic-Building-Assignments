/*
4)Accept charcter from user and check whether it is small case or not
*/

/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{

	bool bFlag=false;
	while(ch!='\0')
	{

	    if(ch>='a' && ch<='z')
		{

			bFlag=true;
			break;
		}
		else
		{

			bFlag=false;
			break;
		}
	}
	return bFlag;
}

int main()
{

    char cValue='\0';
    bool bRet=false;

    
    printf("Enter a character:");
    scanf("%c",&cValue);

    bRet=ChkSmall(cValue);

    if(bRet==true)
    {

    	printf("it is small case character");
    }
    else
    {

     printf("it is not small case character");
    }
    return 0;
}
