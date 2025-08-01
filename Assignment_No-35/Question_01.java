*1)write a program which accept string form user and count number of captial Character
input:"Marvellous Multi OS"

output:4
*/

////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Demo
{
     int CountCaptial(String str)
	{

		int iCount=0;
		int i=0;
		for(i=0;i<str.length();i++)
		{
			if(Character.isUpperCase(str.charAt(i)))
			{
				iCount++;
			}
		}
		return iCount;

	}
   
}

class ass176
{
    public static void main(String  Arg[])
    {
        
        int iRet=0;
         
		    Scanner sobj=new Scanner(System.in);


	   	System.out.println("Enter the name of string:");
	   	String str=sobj.nextLine();
     

        Demo dobj=new Demo();
       iRet=dobj.CountCaptial(str);

       System.out.println("Captial character is:"+iRet);


}

}
