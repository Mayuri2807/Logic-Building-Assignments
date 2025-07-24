/*1)write a program which checks whether 15 th bit on or off.

*/

//////////////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

int main()
{
	int iValue=0;
	int iMask=0x20010;
	int iResult=0;

	cout<<"Enter a number:\n";
	cin>>iValue;

	iResult= iValue & iMask;

	if(iResult==0)
	{

		cout<<"15 bit is off\n";
	}
	else
	{

		cout<<"15 bit is on\n";
	}
 return 0;


}
