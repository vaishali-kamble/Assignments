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

    
    public void ReverseCol()
    {
        int n = Arr.length; 
        for(i = 0; i < n; i++)
        {
            int start = 0;
            int end = n-1;

            while (start < end) 
            {
  
                int temp = Arr[start][i];
                Arr[start][i] = Arr[end][i];
                Arr[end][i] = temp;
      
                start++;
                end--;
            }
        }
        System.out.println("After Reverse Column ");

        for(i = 0; i < n; i++)
        {
             for(j = 0; j < n; j++)
             {
                 System.out.print(Arr[i][j] + " ");
             }
             System.out.println();
        }

    }
        
}
class program3
{
    public static void main(String arg[])
    {
        Diagonal obj = new Diagonal();
        obj.Accept();
        obj.Display();  
        obj.ReverseCol();
    }
}
