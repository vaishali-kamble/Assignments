import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean CheckBit(int iNo, int pos1, int pos2)
    {
        int iMask1 = 1<<pos1;
        int iMask2 = 1<<pos2;
        int iResult1 = 0;
        int iResult2 = 0;

        iResult1 = iNo | iMask1;
        
        iResult2 = iNo | iMask2;
        
        if((iResult1 == 0)||(iResult2==0))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        System.out.println("Enter position 1 : ");
        int value1 = sobj.nextInt();

        
        System.out.println("Enter position 2 : ");
        int value2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bret = bobj.CheckBit(value, value1, value2);



        if(bret == true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }
    }
}
