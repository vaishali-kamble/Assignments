//
import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OnBit(int iNo)
    {
        int iMask = 0X0000000f; //7th bit
        int iResult = 0;
        
        iResult = iNo ^iMask;
    
    return iResult;
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
        int bret = bobj.OnBit(value);

        
        System.out.println("updated number "+bret);

    }
    
}




























