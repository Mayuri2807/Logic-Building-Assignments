/*1)write java program which accept N numbers from user  and accept one another number as NO,check whether number 
No is present or not.
input:N=6
No=66
elements:85 66 3 66 93 88
output=true

input:N=6
No=12
elements:85 66 3 66 93 88
output=False

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
    public boolean Check(int iNo)
    {

         boolean dRet=false;
    	int i=0;
    	for(i=0;i<Arr.length;i++)
    	{
    		if(Arr[i]==iNo)
    		{
    		     dRet=true;
    		}

    	}
    	return dRet;
    }
}
class ass191
{
	public static void main(String Arg[])
	{

        int iLength=0;
        int iSearch=0;
        boolean bRet=false;
		Scanner sobj=new Scanner(System.in);


		System.out.println("Enter the number:");
		iLength=sobj.nextInt();

		System.out.println("Enter the number you want to search:");
		iSearch=sobj.nextInt();

		Number nobj=new Number(iLength);
		nobj.Accept();
		nobj.Display();
		bRet=nobj.Check(iSearch);


     if(bRet==true)
     {
     	System.out.println("Number is presnet");
     }
     else
     {

     	System.out.println("Number is not presnet");

     }
} 
}
