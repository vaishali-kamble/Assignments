import java.lang.*;
import java.util.*;
//
class StringDemo
{
    public boolean strncatx()
    {

Scanner sobj = new Scanner(System.in);

System.out.println("Enter the string");
String str1= sobj.nextLine();

System.out.println("Enter the string");
String str2= sobj.nextLine();

char Arr1[]= str1.toCharArray();

char Arr2[]= str2.toCharArray();
boolean flag = false;
int i =0,icnt1=0,icnt2=0; 


    for( i = 0; i < Arr1.length ; i++)
    {
        {
            icnt1++;
        }
    }

    
    for( i = 0; i < Arr2.length ; i++)
    {
        {
            icnt2++;
        }
    }

    if(icnt1 == icnt2 )
    {
        flag = true;
    }

    return  flag;
    }

    }

class program4
{
    public static void main(String arg[])
    {
        StringDemo strobj = new StringDemo();
        boolean bret = strobj.strncatx();

        if(bret == true)
        {
        System.out.println("Both  size of strings are same");
        }
        else{
            
        System.out.println(" strings size are not same");
        }

    }
}

