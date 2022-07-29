import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ToggleBit(int iNo, int iPos)
    {
        if((iPos <= 0)|| (iPos >32))
        {

            System.out.println("Invalid Position");
        }
        int iMask = 0X000000001; //set to 1
        
        iMask = iMask<<(iPos-1);
        if(iMask == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
}

class program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        
        System.out.println("Enter position");
        int pos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bret = bobj.ToggleBit(value, pos);

        

        if(bret == true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }    }
    
}







