/*4)write a program which accept number from user andd toggle 7th  & 10 bit of that number return modified number

input:137

output:713
*/
#include<iostream>

using namespace std;

int main()
{

	  int iValue = 0;
    int iMask = 0x2c9;
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue ^ iMask;

    cout<<"Number after bit toggle : "<<iResult<<"\n";
    
    return 0;
    

}
