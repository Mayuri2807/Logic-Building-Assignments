/*5)write a program which accept number from user and return differnce between summation of even digits and summation of odd digits.

input=2395

output:15

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public int Differnce(int iNo)
    {
        int iDigit = 0;
        int iSum=0;
        int iDiff=0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit%2==0)
            {
                iSum=iSum+iDigit;
            }
           else
           {
              iDiff=iDiff+iDigit;
                 
            }
            iNo = iNo / 10;
        }
        return iSum-iDiff;
    }
}

class program190
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet=0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet=dobj.Differnce(iValue);


        System.out.println("Differnce is:"+iRet);

    }
}
