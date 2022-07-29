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
        System.out.println(str1.equals(str2));
    }
}
class program3
{
    public static void main(String arg[])
    {
        StringDemo strobj = new StringDemo();
        strobj.strncatx();

        /*if(bret == true)
        {
        System.out.println("Both strings are same");
        }
        else{
            
        System.out.println("Both strings are not same");
        }
*/

    }
}