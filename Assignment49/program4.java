import java.io.*;
import java.util.*;

class Digit
{
    private int i =0, j = 0, mult = 1;

    public int Count()
    {
        
        Scanner sobj = new Scanner(System.in);

           System.out.println("Enter number");
           int inum = sobj.nextInt();

           while (inum > 0)
           {
               int idigit = inum % 10;
               
                mult = mult *idigit;
               
               inum = inum / 10;
           }
           return mult;
    }
}

class program4
{
    public static void main(String arg[])
    {
        Digit obj = new Digit();
        int iret = obj.Count();
        
        System.out.println ( "Multiplication of digits : " +iret);
     }
}