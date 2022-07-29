import java.util.*;

class Diagonal
{
    private int i =0, j = 0;
    int[][] Arr;

    public void Accept()
    {
        
        Scanner sobj = new Scanner(System.in);

           System.out.println("Enter number of rows");
           int irow = sobj.nextInt();

           System.out.println("Enter number of columns");
           int icol = sobj.nextInt();

           Arr = new int[irow][icol];

           System.out.println("Enter the elements");
           for(i = 0; i < Arr.length; i++)
           {
                for(j = 0; j < Arr[i].length; j++)
                {
                    Arr[i][j] = sobj.nextInt();
                }
           }
    }

    public void Display()
    {
        
        for(i = 0; i < Arr.length; i++)
        {
             for(j = 0; j < Arr[i].length; j++)
             {
                 System.out.print(Arr[i][j] + " ");
             }
             System.out.println();
        }

    }

    
    public void AddDiagonal()
    {
        int rows = Arr.length; 
        int cols = Arr[0].length;
        int iSum = 0;
        for(i = 0; i < cols; i++)
        {
            for(j = 0; j < rows; j++)
            {
                iSum = iSum + Arr[i][j];
            }

        System.out.println("Addition of "+(i+1)+"column is :"+iSum);

        }
        
    }
    
}
class program4
{
    public static void main(String arg[])
    {
        Diagonal obj = new Diagonal();
        obj.Accept();
        obj.Display();  
        obj.AddDiagonal();
     }
}
