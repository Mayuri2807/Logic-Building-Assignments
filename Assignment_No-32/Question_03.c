/*3)write a program which accept number from user andd toggle 7th bitof that number return modified number

input:137

output:201

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

int main()
{

	int iValue = 0;
    int iMask = 0xc9;
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue ^ iMask;

    cout<<"Number after bit toggle : "<<iResult<<"\n";
    
    return 0;
    

}
