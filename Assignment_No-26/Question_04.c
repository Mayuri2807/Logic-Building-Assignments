/*
129)Accept charcater from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*)

input=%
output=true

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
	bool bflag = false;
	while(ch!='\0')
	{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$'|| ch=='%'|| ch=='^'|| ch=='&'|| ch=='*')
	{
		bflag=true;
		break;
	}
 }
	return bflag;
}


int main()
{

	char cValue='\0';
	bool bRet=false;

	printf("Enter the character:");
	scanf("%c",&cValue);
	
	bRet=ChkSpecial(cValue);
	if(bRet==true)
	{
		printf("it is special character:");
   }
   else
   {
   	printf("it is not special character");
   }
	return 0;
}
