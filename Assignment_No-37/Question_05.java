/*5)write a java program which accept N numbers from user and return product of all odd elements.
input:N:6
elements:15 66 3 70 10 88

output:45
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////

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
    public int Product()
    {
    	int i=0;
    	int iOdd=1;

    	for(i=0;i<Arr.length;i++)
    	{
    		if(Arr[i]%2!=0)
    		{
    		   iOdd=iOdd*Arr[i];
    		}
    	}
    	  return iOdd;
    }
   
  } 
 class ass195
{
	public static void main(String Arg[])
	{

        int iLength=0;
        int iRet=0;
        
		Scanner sobj=new Scanner(System.in);


		System.out.println("Enter the number:");
		iLength=sobj.nextInt();

		Number nobj=new Number(iLength);
		nobj.Accept();
		nobj.Display();
		iRet=nobj.Product();

		System.out.println("Product is:"+iRet);


	}
		

}
