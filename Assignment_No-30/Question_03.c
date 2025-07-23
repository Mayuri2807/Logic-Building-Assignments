/*3)Accept character from user and check whether it is digit or not
(0-9)

input:7
output:true

*/

//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{

	bool bFlag=false;
	while(ch!='\0')
	{

	    if(ch>='0' && ch<='9')
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

    bRet=ChkDigit(cValue);

    if(bRet==true)
    {

    	printf("it is digit");
    }
    else
    {

     printf("it is not digit");
    }
    return 0;
}
