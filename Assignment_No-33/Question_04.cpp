/*4)write a program which accept one number and postion from user and toggle that number.return modified number.

input:10 3

output:14

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int togglebit(int iNo ,int iLocation)
{
	
    int iMask=0x1;
    int iResult=0;
    iMask=iMask<<(iLocation-1);
    
   iResult=iNo ^ iMask;
    return iResult;
	
}
int main()
{

	   int iValue = 0;
    int iPos = 0;
    int iRet=0;
    
    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iPos;

    iRet=togglebit(iValue,iPos);

    cout<<"modified number is:"<<iRet<<"\n";

   return 0;
}
