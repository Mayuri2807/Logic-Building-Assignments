/*4)write a java program which accept string from user and recheck whether its contains vowels or not

input:"MarvellouS"

output=true

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Demo
{
    public boolean ChkVowel(String str)
	{

       int i=0;
       boolean dRet=false;
       for(i=0;i<str.length();i++)
       {
       	char ch=str.charAt(i);

       	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
       	{
       		dRet=true;
        }
  
       }
       return dRet;
		

	}
   
}

class ass179
{
    public static void main(String  Arg[])
    {
        
       
        boolean bRet=false;
         
		    Scanner sobj=new Scanner(System.in);


		   System.out.println("Enter the name of string:");
		   String str=sobj.nextLine();
     

        Demo dobj=new Demo();
      bRet=dobj.ChkVowel(str);


       if(bRet==true)
       {

       	 System.out.println("it contains vowel");
       }
       else
        {

        	System.out.println("it does not contains vowel");
       }
            
    }
}



