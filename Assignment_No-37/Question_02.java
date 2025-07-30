/*2)write java program which accept N numbers from user  and accept one another number as NO,return the first occurance
of that No.
N:6
No:66
Elments:85 66 3 66 93 88
output:1

N:6
No:12
Elments:85 66 366 93 88
output:-1

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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
    	int i= 0 ;
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
    public int FirstOcc(int no)
    {
    	int i=0;
    	for(i=0;i<Arr.length;i++)
    	{
    		if(Arr[i]==no)
    		{
    			return i;
    		}
    	}
    	return -1;

   }
 }
 class ass192
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

		bRet=nobj.FirstOcc(iSearch);

		System.out.println("First occurance is:"+bRet);


 	}
 }
