import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToggleBit(int iNo)
    {

         int iMask = 0X10000001;
         int iResult = iMask ^ iNo;
         
    return iResult;
    }
}


public class program5{

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int value = sobj.nextInt();

        Bitwise obj = new Bitwise();
        int iret = obj.ToggleBit(value);

        
        System.out.println("updated number "+iret);
    }
    
}
