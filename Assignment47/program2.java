import java.util.*;
import java.io.*;

class StringDemo
{
    private
    
    int iCnt = 0;


    
    public void CountSmall()
    {
        Scanner sc= new Scanner(System.in); //System.in is a standard input stream  
        System.out.print("Enter a string: ");  
        String str= sc.nextLine();
        
        for(int i=0; i<str.length(); i++)
        {
            char ch=str.charAt(i);
            
            if(ch>='a' && ch<='z')
            {
                iCnt++;
            }
        }
        
        System.out.println("Upper case letters : " + iCnt);
    }
}
class program2
{
    public static void main(String arg[])
    {
        StringDemo obj = new StringDemo();
        obj.CountSmall();
    }
}
