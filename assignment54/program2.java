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
    
            for(int i = Arr.length-1; i >=0 ; i--)
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
class program2
{
    public static void main(String arg[])
    {
        pattern pobj = new pattern();

        pobj.patternX(); 
    }
}