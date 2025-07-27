/*2)write a program which aceept two number from user and display the position of common bits from that two number
 
 input: 10 15
 
 output:2  4
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int CommonBits(int iNo1,int iNo2)
{
  
	int iResult=0;
	iResult=iNo1 & iNo2;
	int iPos=1;
  
	while(iResult!=0)
	{
		if((iResult & 1)==1)
		{
			cout<<iPos<<" ";
		}
		iResult=iResult >> 1;
		iPos++;
	}
	
}
int main()
{

	  int iValue1 = 0;
	  int iValue2 = 0;
    int iRet=0;
    
    cout<<"Enter the first  number : \n";
    cin>>iValue1;

    cout<<"Enter the second number : \n";
    cin>>iValue2;


    iRet=CommonBits(iValue1,iValue2);

    return 0;

}

