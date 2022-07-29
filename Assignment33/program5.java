//4th and 7th bit
//32 31 30 29  28 27 26 25  24 23 22 21  20 19 18 17  16 15 14 13  12 11 10 9  8 7 6 5  4 3 2 1
//0  0  0  0   0  0  0  0   0  0  0  0   0  0  0  0   0  0  0  0   0  0  0  0  0 1 0 0               1 0 0 0   
//
import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToggleBit(int iNo, int start, int end)
    {
        int iMask = start; //set to 1
        int iResult = 0;
        
        iMask = end<<(start-1);
        iResult = iNo ^ iMask;
    
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

        
        System.out.println("Enter start position ");
        int pos1 = sobj.nextInt();

        
        System.out.println("Enter end position ");
        int pos2= sobj.nextInt();

        

        Bitwise bobj = new Bitwise();
        int iret = bobj.ToggleBit(value, pos1,pos2);

        
        System.out.println("toggled bit ");

    }
    
}




























