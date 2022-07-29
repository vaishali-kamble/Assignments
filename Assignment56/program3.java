import java.lang.*;
import java.util.*;

class pattern
{
    public void patternX()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter rows");
        int row = sc.nextInt();

        System.out.println("Enter column");
        int col = sc.nextInt();

        int j = 0, i= 0;
        for(i =1;i<=row; i++)
        {
            for(j=col; j>0; j--)
            if((i==j)||(i==1)||(j==1)||(i==row)||(j==col))
            {
                System.out.print("*\t");
            }
            else          
            {
                
                System.out.print(" \t");
            }
            System.out.println(" ");
        }

}
}
class program3
{
    public static void main(String arg[])
    {
        pattern pobj = new pattern();

        pobj.patternX(); 
    }
}