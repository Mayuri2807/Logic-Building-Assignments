/*4)write a program wich aceept one number,two position fro user and check whether bit at first or bit at second position is on or off

input:10 3 7

output=true  

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

bool CheckBit(int iNo,int iLocation1,int iLocation2)
 {
    int iMask1 = 1 << (iLocation1 - 1);
    int iMask2 = 1 << (iLocation2 - 1);
    return ((iNo & iMask1) == iMask1) || ((iNo & iMask2) == iMask2);
}

int main() 
{
    int iValue = 0;
    int iPos1=0;
    int iPos2=0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter first position : \n";
    cin>>iPos1;

    cout<<"Enter second position : \n";
    cin>>iPos2;
    
    bRet = CheckBit(iValue,iPos1,iPos2);
    if(bRet == true) 
    {
        cout<< "Bit at position " << iPos1 << " or " << iPos2 << " is ON\n";
    }
    else
     {
        cout<<"Bit at position " << iPos1 << " and " << iPos2 << " is OFF\n";
    }
    return 0;
}
