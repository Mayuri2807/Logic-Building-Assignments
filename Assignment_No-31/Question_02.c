/*2)write a program which checks 5 th and 18 th bit on or off

*/


////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main()
{
	int iValue=0;
	int iMask=0x40020;
	int iResult=0;

	cout<<"Enter a number:\n";
	cin>>iValue;

	iResult= iValue & iMask;

	if(iResult==0)
	{

		cout<<"5 & 18 bit is off\n";
	}
	else
	{

		cout<<"5 & 18 bit is on\n";
	}
 return 0;


}
