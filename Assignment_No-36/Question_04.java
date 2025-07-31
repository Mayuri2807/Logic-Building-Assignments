/*4)write a program which accept  humber from user and return multiplication of all digits:

input:2395

output:270

*/

////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Digits
{
    public int CountMultiply(int iNo)
    {
        
        int iDigit = 0;
        int iMulti=1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMulti=iMulti*iDigit;
            iNo = iNo / 10;
        }
        return iMulti;
        
    }
}

class program189
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet=0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
       iRet= dobj.CountMultiply(iValue);

        System.out.println("Multipilcation is:"+iRet);

    }
}
