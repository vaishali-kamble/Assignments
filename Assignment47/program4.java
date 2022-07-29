import java.util.*;
import java.io.*;

class StringDemo
{

    public boolean chVowel()
    {
        Scanner sc= new Scanner(System.in); //System.in is a standard input stream  
        System.out.print("Enter a string: ");  
        String str= sc.nextLine();
        str = str.toLowerCase();

        for(int i=0; i<str.length(); i++)
        {
            
            if((str.charAt(i)=='a')||(str.charAt(i)=='e')||(str.charAt(i)=='i')||(str.charAt(i)=='o')||(str.charAt(i)=='u'))
            {
                return true;
            }
        }
        
        return false;
    }
}
class program4

{
    public static void main(String arg[])
    {
        boolean bRet;
        StringDemo obj = new StringDemo();
        bRet = obj.chVowel();

    if(bRet == true)
    {
        System.out.println("It contains Vowel");
    }
    else
    {
        System.out.println("It does not contains Vowel");
    }
    }
}
