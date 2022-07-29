import java.lang.*;
import java.util.*;
//
class StringDemo
{
    public void strncatx()
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first string");
        String str1 = sobj.nextLine();
        
        System.out.println("Enter the second string");
        String str2 = sobj.nextLine();
        System.out.println("Enter number");
        int n = sobj.nextInt();
        String str3 = "";
        str3 = str2.substring(0, n);

        System.out.println(str1+str3);
    }
}
class program1
{
    public static void main(String arg[])
    {
        StringDemo strobj = new StringDemo();
        strobj.strncatx();
    }
}