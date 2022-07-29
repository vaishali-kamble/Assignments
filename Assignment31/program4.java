//
import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToggleBit(int iNo)
    {

        int iMask = 0X00000240; //7th bit 
        int iResult = 0;

        
        iResult = iNo ^iMask;
    
    return iResult;
    }
}

class program4

{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();


        Bitwise bobj = new Bitwise();
        int iret = bobj.ToggleBit(value);

        
        System.out.println("updated number "+iret);

    }
    
}




























