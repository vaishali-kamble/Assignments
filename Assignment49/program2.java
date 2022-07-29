import java.io.*;
import java.util.*;

class Digit
{
    private int odd = 0;

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
                    odd++;
               }
               inum = inum / 10;
           }
           return odd;
        }
       
}

class program2
{
    public static void main(String arg[])
    {
        Digit obj = new Digit();
        int iret = obj.Count();
        
        System.out.println ( "odd count : " +iret);
     }
}