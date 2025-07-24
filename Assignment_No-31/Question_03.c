/*3)write a program which checks 7th and 15th & 21st & 28th  bit on or off

*/


///////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
int main()
{
	int iValue=0;
	int iMask=0x8104040;
	int iResult=0;

	cout<<"Enter a number:\n";
	cin>>iValue;

	iResult= iValue & iMask;

	if(iResult==0)
	{

		cout<<"5 & 15 & 21 & 28 bit is off\n";
	}
	else
	{

		cout<<"5 & 15 & 21 & 28 bit is on\n";
	}
 return 0;


}
