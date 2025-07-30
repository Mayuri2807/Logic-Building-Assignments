/*4)write a program which accept N number from user and accept Range ,Display all elements from that range
input:N=6
start:60
End=90
elements:85 66 3 76 93 88
output=66 76 88 

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*; 
class Number
{
   public int Arr[];
	public Number(int iSize)
	{
		 Arr=new int[iSize];

    }
    public void Accept()
    {
    	int i=0;
    	Scanner sobj=new Scanner(System.in);
    	System.out.println("Enter the number of elments:");

    	for(i=0;i<Arr.length;i++)
    	{
    		Arr[i]=sobj.nextInt();
    	}
    }
    public void Display()
    {
        int i = 0;
        System.out.println("Elements of the array are : ");

        for(i = 0 ; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

    }
    public void DisplayX(int iValue1,int iValue2)
    {
    	int i=0;

    	for(i=0;i<Arr.length;i++)
    	{
    		if(Arr[i]>=iValue1 && Arr[i]<=iValue2)
    		{
    			System.out.println(Arr[i]);
    		}
    	}
    }
  } 
 class ass194
{
	public static void main(String Arg[])
	{

        int iLength=0;
        int iStart=0;
        int iEnd=0;
        
		Scanner sobj=new Scanner(System.in);


		System.out.println("Enter the number:");
		iLength=sobj.nextInt();

		System.out.println("Enter the first number:");
		iStart=sobj.nextInt();

		System.out.println("Enter the last number:");
		iEnd=sobj.nextInt();

		Number nobj=new Number(iLength);
		nobj.Accept();
		nobj.Display();
		nobj.DisplayX(iStart,iEnd);
	}
		

}
