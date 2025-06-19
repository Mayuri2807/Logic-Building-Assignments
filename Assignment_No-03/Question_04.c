/*

accept one character from user and convert case of that chracter.
input=a  output=A
input=d  outpu=D

*/
#include<stdio.h>
 char DisplayConvert(char Cvalue1)
 {

     if (Cvalue1 >= 'a' && Cvalue1 <= 'z') 
     {
        
        return Cvalue1 - ('a' - 'A');
    } 
        else if (Cvalue1 >= 'A' && Cvalue1 <= 'Z') 
     {
        
        return Cvalue1 + ('a' - 'A');
     } 
    else 
    {
        
        return Cvalue1;
    }

 }
int main()
{
	char cValue='\0';
	printf("Enter character\n");
	scanf("%c",&cValue);
	DisplayConvert(cValue);
	return 0;
}