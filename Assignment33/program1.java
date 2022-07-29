import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToggleBit(int iNo)
    {
        int counter = 0;
        for(int pos = 0; pos <31; pos++)
        {
            int num = 1 << pos;
            if((iNo & num) == num)
                counter++;
        }
        return counter;        
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
        int bret = bobj.ToggleBit(value);
        System.out.println(bret);
    
    }
}






