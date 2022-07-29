import java.lang.*;
import java.util.*;
//
class StringDemo
{
    public void strncatx()
    {

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the string");
    String str1= sobj.nextLine();

    char Arr1[]= str1.toCharArray();

    int i =0;


        for( i=Arr1.length-1 ; i>=0 ; i--)

        {
            if(Arr1[i]>='A' && Arr1[i]<='Z')
            
            {
                Arr1[i] = (char) (Arr1[i] + 'a' - 'A');
               System.out.print(Arr1[i]);
            }
            else if (Arr1[i]>='a' && Arr1[i]<='z')
            {
            Arr1[i] = (char) (Arr1[i] + 'A' - 'a');
            
               System.out.print(Arr1[i]);
            }
        }
        }

}

class program5
{
    public static void main(String arg[])
    {
        StringDemo strobj = new StringDemo();
        strobj.strncatx();

    }
}

