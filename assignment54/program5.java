import java.lang.*;
import java.util.*;

class pattern
{
    public void patternX()
    {
        {
            Scanner sobj = new Scanner(System.in);
    
            System.out.println("Enter the string");
            String str = sobj.nextLine();
    
            char Arr[] = str.toCharArray();
    
            for(int i = 0; i < row; i++)
            {
                for(int j = 0; j <= i; j++)
                {
                    System.out.print(Arr[j]+"  ");
                }
                System.out.println();
            }
                    
            for(int i = Arr.length-2; i >=0 ; i--)
            {
                for(int j = 0; j <= i; j++)
                {
                    System.out.print(Arr[j]+"  ");
                }
                System.out.println();
            }
    
        }
}
}
class program5
{
    public static void main(String arg[])
    {
        pattern pobj = new pattern();

        pobj.patternX(); 
    }
}