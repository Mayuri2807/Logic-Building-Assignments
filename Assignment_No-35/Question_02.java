/*2)write a program which accept string form user and count number of small Character

input:"Marvellous"

output:9
*/

///////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Demo
{
    public int CountSmall(String str)
	{

		int iCount=0;
    
		int i=0;
    
		for(i=0;i<str.length();i++)
		{
			if(Character.isLowerCase(str.charAt(i)))
			{
				iCount++;
			}
      
		}
		return iCount;

	}
   
}

class ass177
{
    public static void main(String A[])
    {
        
         int iRet=0;
         
		     Scanner sobj=new Scanner(System.in);


		    System.out.println("Enter the name of string:");
		    String str=sobj.nextLine();
     

        Demo dobj=new Demo();

        iRet=dobj.CountSmall(str);

        System.out.println("Small character is:"+iRet);
 }

}
