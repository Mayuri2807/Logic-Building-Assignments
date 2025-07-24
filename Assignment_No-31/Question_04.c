/*4)write a program which checks 7th and 8th  & 9th bit on or off


*/
/////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
	int iValue=0;
	int iMask=0xc0;
	int iResult=0;

	cout<<"Enter a number:\n";
	cin>>iValue;

	iResult= iValue & iMask;

	if(iResult==0)
	{

		cout<<"7 & 8 & 9bit is off\n";
	}
	else
	{

		cout<<"5 & 8 & 9 bit is on\n";
	}
 return 0;


}
