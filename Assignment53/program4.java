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

        for(i= row;i>0; i--)
        {
            for(j=1; j<= col; j++)
            {
                if(j%2==0)
                {
                System.out.print(" # \t");
                }
                else
                {
                    
                System.out.print("x \t");
                }
            }
            
            System.out.println(" ");
        }

    }
}

class program4
{
    public static void main(String arg[])
    {
        pattern pobj = new pattern();

        pobj.patternX();
    }
}