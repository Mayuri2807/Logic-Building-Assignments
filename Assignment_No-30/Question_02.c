/*2)Accept character from user check whether it is captial or not

(A-Z)
*/

/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkCaptial(char ch)
{

	bool bFlag=false;
	while(ch!='\0')
	{

	    if(ch>='A' && ch<='Z')
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

    bRet=ChkCaptial(cValue);

    if(bRet==true)
    {

    	printf("it is capital character");
    }
    else
    {

     printf("it is not capital character");
    }
    return 0;
  
}
