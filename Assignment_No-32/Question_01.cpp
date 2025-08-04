/*1)write a program which accept number from user and off 7 th bit of that number if it on.return modified number

input:79

output=15
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

int main()
{

	int iValue=0;
	int iResult=0;
	int iMask=0x8f;


	cout<<"Enter a number:\n";
	cin>>iValue;

	iResult=iValue & iMask;


	cout<<"modified number:"<<iResult<<"\n";

	return 0;


    

}
