/*3)write a program which accept one number from user and check whether 9th or 12th bit is on or off.

input=257

output=true
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x101;
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)
    {   
      return true;   
    }
    else
    {  
      return false;  
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<< "9 and 12 Bits is ON\n";
    }
    else
    {
        cout<<"9th and 12th Bits is OFF\n";
    }
    
    return 0;
}
