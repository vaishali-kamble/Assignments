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

        char ch = '\0';
        int j = 0, i= 0;
        for(i =1;i<=row; i++)
        {
            for(j=col; j>0; j--)
            if(i==j)
            {
                System.out.print("# \t");
            }
            else if(i>j)            
            {
                
                System.out.print("@ \t");
            }
            else if(i<j)
            {
                
                System.out.print("* \t");
            }
            System.out.println(" ");
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