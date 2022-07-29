import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToggleBit(int iNo1, int iNo2)
    {
         int pos = 0;
        for(pos = 0; pos <31; pos++)
        {
            
            int Mask1 =1 << pos;
            int Mask2 =1 << pos;

            if((iNo1&iNo2&Mask1)==Mask1)
            {
                System.out.println(pos);
            }

            
           /*  if((iNo2&Mask2)==Mask2)
            {
                System.out.println(pos);
            }
            */
        }
        return pos;        
    }
}

class program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value1 = sobj.nextInt();
        System.out.println("Enter number ");
        int value2 = sobj.nextInt();
        
        Bitwise bobj = new Bitwise();
        int bret = bobj.ToggleBit(value1,value2);
        System.out.println(bret);
    
    }
}






