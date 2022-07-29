import java.lang.*;
import java.util.*;
class Array
{

    public int Arr[];

    public int Brr[];

    public int ArrN[];
    
    public Array(int iSize,int iSize1)
    {
        Arr = new int[iSize];
        Brr = new int[iSize1];
        ArrN = new int[iSize+iSize1];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements");
        for(int i= 0;i <Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        for(int j= 0;j<Brr.length; j++)
        {
            Brr[j] = sobj.nextInt();
        }

    }

    public void Display()
   {
        
         int a =0;
        for(int i= 0;i <Arr.length; i++)
        {
            ArrN[a] = Arr[i];
            a++;
        }
        for(int j= 0;j <Brr.length; j++)
        {
            ArrN[a] = Brr[j];
            a++;
        }
        
        System.out.println();
        
        System.out.println("New array is"+ArrN[a]);
    }
}
class program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size for first array : ");
        int size = sobj.nextInt();
    
        
        System.out.println("Enter the size for second array : ");
        int size1 = sobj.nextInt();

        Array aobj = new Array(size,size1);
        aobj.Accept();
        aobj.Display();
    }
}