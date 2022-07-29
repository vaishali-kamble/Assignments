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

        for(i =1,ch='A';i<=row; i++,ch++)
        {
            for(j=1; j<= col; j++)
            {
                System.out.print(ch +"\t");
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