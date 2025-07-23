/*1)aceept character from user and check whether it is alphatbet or not(A-Z a -z)

input:F

output:true

input:&

ouput:false

*/

/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{

	bool bFlag=false;
	while(ch!='\0')
	{

	    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
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

    bRet=ChkAlpha(cValue);

    if(bRet==true)
    {

    	printf("it is character");
    }
    else
    {

     printf("it is not character");
    }
    return 0;
}
