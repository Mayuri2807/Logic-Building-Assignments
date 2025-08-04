/*2)write a program which accept number from user and off 7 th and 10 th bit of that number.return modified number

input:577

output:1
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{

	int iValue=0;
	int iResult=0;
	int iMask=0x3f;


	cout<<"Enter a number:\n";
	cin>>iValue;

	iResult=iValue & iMask;


	cout<<"modified number:"<<iResult<<"\n";

	return 0;


    

}
