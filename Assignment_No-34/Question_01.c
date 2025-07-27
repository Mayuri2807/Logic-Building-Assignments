/*1)write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator

input:11

output:3
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int CountOne(int iNo)
{
	int iCount=0;
	while(iNo!=0)
	{
		if((iNo & 1)==1)
		{
			iCount++;
		}
		iNo=iNo >> 1;
	}
    return iCount;
	
}

int main()
{

  	int iValue = 0;
   
    int iRet=0;
    
    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet=CountOne(iValue);

    cout<<"no of on bit is:"<<iRet<<"\n";
  
     return 0;
}
