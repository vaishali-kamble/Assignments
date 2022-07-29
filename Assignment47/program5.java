import java.util.*;
import java.io.*;

class StringDemo
{

    public void Reverse()
    {
    
            Scanner sc= new Scanner(System.in); //System.in is a standard input stream  
            System.out.print("Enter a string: ");  
            String str= sc.nextLine();

            System.out.print("original string "+str);  

            
            String rstr = "";

            for(int i=0; i<str.length(); i++)
            {
                char ch=str.charAt(i);

                rstr = ch + rstr;
            }
    }
}
class program5

{
    public static void main(String arg[])
    {
        StringDemo obj = new StringDemo();
        obj.Reverse();
    }
}
