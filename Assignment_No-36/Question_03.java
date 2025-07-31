/*3)write a program which accept  humber from user and return the count of Digits in between 3 and 7

input:2395

output:1

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Digits
{
    public void CountDigits(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit>3 && iDigit<=7)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        System.out.println("number of digits between 3 and 7 are : "+iCount);
    }
}

class program188
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.CountDigits(iValue);

    }
}
