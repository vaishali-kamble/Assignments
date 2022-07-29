import java.io.*;
import java.util.*;

class Digit
{
    private int i =0, j = 0, even = 0;

    public int Count()
    {
        
        Scanner sobj = new Scanner(System.in);

           System.out.println("Enter number");
           int inum = sobj.nextInt();

           while (inum > 0)
           {
               int idigit = inum % 10;
               if (idigit % 2 == 0)
               {
                    even++;
               }
               inum = inum / 10;
           }
           return even;
    }
}

class program1
{
    public static void main(String arg[])
    {
        Digit obj = new Digit();
        int iret = obj.Count();
        
        System.out.println ( "odd count : " +iret);
     }
}