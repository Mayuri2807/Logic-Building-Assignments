/*1)write a program which accept one number and postion from user and check whether bit at that position is on or off.if bit is one return true otherwise retrun false.

input=10 2

output=true

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

bool checkbit(int iNo,int ilocation)
{
	 int iMask = 0x1;
	 iMask = iMask << (ilocation -1);

	 return(iNo & iMask)!=0;
}

int main()
{

	  int iValue = 0;
    int iPos = 0;
    
    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iPos;

    if(checkbit(iValue,iPos))
    {
     	cout<<"true";
    }
    else
    {
    	cout<<"false";
    }
 return 0;
}
