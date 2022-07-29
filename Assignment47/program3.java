import java.util.*;
import java.io.*;

class StringDemo
{
    private
    
    int capCnt = 0;
    int smallCnt = 0; 


    public void CountCapitalsmall()
    {
        Scanner sc= new Scanner(System.in); //System.in is a standard input stream  
        System.out.print("Enter a string: ");  
        String str= sc.nextLine();
        
        for(int i=0; i<str.length(); i++)
        {
            char ch=str.charAt(i);
            
            if(ch>='A' && ch<='Z')
            {
                capCnt++;
            }
            
            if(ch>='a' && ch<='z')
            {
                smallCnt++;
            }
        }
        
        System.out.println("Upper case letters : " + capCnt);
        System.out.println("small case letters : " + smallCnt);
    }

    public void CountDiff()
    {
        int diff = 0;

        diff = smallCnt - capCnt;
        
        System.out.println("Difference between uppercase and small case letters are: " + diff);
    }
}
class program3

{
    public static void main(String arg[])
    {
        StringDemo obj = new StringDemo();
        obj.CountCapitalsmall();
        obj.CountDiff();
    }
}
