/*3)write a java program which accept string from user and return difernce between frequncy of small character anD frequency of captial character
 
 input:"MarvellouS"
 
output=6 (8-2)

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Demo
{
     int CountCaptial(String str)
	{

		int iCount1=0;
    int iCount2=0;
    
		int i=0;
    
		for(i=0;i<str.length();i++)
		{
      
			if(Character.isUpperCase(str.charAt(i)))
			{
				iCount1++;
			}
            else
            {
                iCount2++;
            }
		}
		return iCount1-iCount2;

	}
   
}

class ass178
{
    public static void main(String  Arg[])
    {
        
        int iRet=0;
         
	     	Scanner sobj=new Scanner(System.in);


		   System.out.println("Enter the name of string:");
		   String str=sobj.nextLine();
     

        Demo dobj=new Demo();
        iRet=dobj.CountCaptial(str);

        System.out.println("Differnce is:"+iRet);

 }

}

