//
import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OnBit(int iNo)
    {
        int iMask = 0X00000040; //7th bit
        int iResult = 0;
        
        iResult = iNo ^iMask;
    
    return iResult;
    }
}

class program1
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




























