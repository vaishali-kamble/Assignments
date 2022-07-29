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

        for(i= 0;i<row; i++)
        {
            for(j=1; j<= col; j++)
            {
                System.out.print("* \t");
            }
            
            System.out.println(" ");
        }

    }
}

class program1
{
    public static void main(String arg[])
    {
        pattern pobj = new pattern();

        pobj.patternX();
    }
}