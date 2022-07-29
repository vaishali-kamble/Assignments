import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToggleBit(int iNo, int iPos)
    {
        if((iPos<=0)||(iPos>32))
        {
            System.out.println("Invalid Position");
        }

         int iMask = 0X00000001;
         iMask = iMask<<(iPos-1);
         int iResult = iMask ^ iNo;
         
    return iResult;
    }
}


public class program4 {

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int value = sobj.nextInt();

        System.out.println("Enter the position");
        int pos = sobj.nextInt();

        Bitwise obj = new Bitwise();
        int iret = obj.ToggleBit(value, pos);

        
        System.out.println("updated number "+iret);
    }
    
}
