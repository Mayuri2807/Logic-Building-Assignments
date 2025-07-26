/*2)write a prgram which accept one number and position from user and off that bit.return modified number

input:10 ipos:2

output:8
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int Offbit(int iNo ,int iLocation)
{
	
    int iMask=0x1;
    int iResult=0;
    iMask=iMask<<(iLocation-1);
    
     iResult=iNo & ~iMask;
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

    iRet=Offbit(iValue,iPos);

    cout<<"modified number is:"<<iRet<<"\n";

     return 0;
}

