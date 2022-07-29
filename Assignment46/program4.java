import java.util.*;

class Diagonal
{
    private int i =0, j = 0;
    
    boolean flag = true;    
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

    
    public boolean identityCheck()
    {
        int rows = Arr.length;    
        int cols = Arr[0].length;    
        if(rows != cols)
        {    
            System.out.println("Matrix should be a square matrix");    
        }  
        else 
        {    
            for(int i = 0; i < rows; i++)
            {    
                for(int j = 0; j < cols; j++)
                {    
                  if(i == j && Arr[i][j] != 1)
                  {    
                      flag = false;    
                      break;    
                  }    
                  if(i != j && Arr[i][j] != 0)
                  {    
                      flag = false;    
                      break;    
                  }    
                }    
            }     
        }   
        return flag; 
    }    

        
}
class program4
{
    public static void main(String arg[])
    {
        Diagonal obj = new Diagonal();
        boolean bret;
        obj.Accept();
        obj.Display();  
        bret = obj.identityCheck();
        
                
        if(bret==true)    
        System.out.println("Given matrix is an identity matrix");    
    else    
        System.out.println("Given matrix is not an identity matrix");   
    }
}
