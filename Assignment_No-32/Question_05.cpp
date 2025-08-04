/*5)write a program which accept number from user and on its first 4 bit.return modified number

input:73

output:79
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main()
{

	int iValue = 0;
    int iMask = 0x46;
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue ^ iMask;

    cout<<"Number after bit toggle : "<<iResult<<"\n";
    
    return 0;
    

}
