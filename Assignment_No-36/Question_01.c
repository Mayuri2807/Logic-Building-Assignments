/*1)write a java program which accept number from user and return the count even digit

input:2395

output:1

*/

//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public void CountEvenDigits(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit%2==0)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        System.out.println("Frequency of Even  is : "+iCount);
    }
}

class program186
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.CountEvenDigits(iValue);

       
    }
}
