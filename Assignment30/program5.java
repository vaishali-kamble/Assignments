import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 0X80000001;
        int iResult = 0;

        iResult = iNo & iMask;
        
        System.out.println(" "+iMask);
        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bret = bobj.CheckBit(value);

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



























