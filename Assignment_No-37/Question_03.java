/*3)write java program which accept N numbers from user  and accept one another number as NO,return the index of last occurance
of that No.
N:6
No:66
Elments:85 66 3 66 93 88
output:3

N:6
No:93
Elments:85 66 3 66 93 88
output:4

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
    public int LastOcc(int no)
    {
    	int i=0;
        int Lastindex=-1;
    	for(i=0;i<Arr.length;i++)
    	{
    		if(Arr[i]==no)
    		{
    	        Lastindex=i;
    		}
    	}
    	return Lastindex;

   }
 }
 class ass193
 {
 	public static void main(String Arg[])
 	{

        int iLength=0;
        int iSearch=0;
        int bRet=0;       
		Scanner sobj=new Scanner(System.in);


		System.out.println("Enter the number:");
		iLength=sobj.nextInt();

		System.out.println("Enter the number you want to know index occurance:");
		iSearch=sobj.nextInt();

		Number nobj=new Number(iLength);
		nobj.Accept();
		nobj.Display();

		bRet=nobj.LastOcc(iSearch);

		System.out.println("last occurance is:"+bRet);


 	}
 }
