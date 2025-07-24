/*5)write a program which checks whether first and last bit is on or off.first bit number 1 and last bit number is 32

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
int main()
{
	int iValue=0;
	int iMask=0x80000001;
	int iResult=0;

	cout<<"Enter a number:\n";
	cin>>iValue;

	iResult= iValue & iMask;

	if(iResult==0)
	{

		cout<<"1 and 32 bit is off\n";
	}
	else
	{

		cout<<"1 and 32  bit is on\n";
	}
 return 0;


}
