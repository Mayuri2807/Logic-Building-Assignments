/*5)Accept divsion of student from user and depends on the divsion display exam timing.there are 4 div in school a b c d.Exam of divsion are a at 7,b at 8.30,c at 9.20
d at 10.30

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplaySchedule(char ChDiv)
{
  	switch(ChDiv)
    	{

    		case ChDiv :
    		printf("your exam at 7 Am");
    		break;

    		case ChDiv:
    		printf("your exam at 8.30 Am");
    		break;
    		
    		case ChDiv:
    		printf("your exam at 9.20 Am");
    		break;
    		
    		case ChDiv:
    		printf("your exam at 10.30 Am");
    		break;
    		
	}
}

int main()
{
     char cValue='\0';
     

    printf("Enter a division:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;

}
