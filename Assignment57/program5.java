import java.lang.*;
import java.util.*;
class Array
{

    public int Arr[];

    public int Brr[];
    
    public Array(int iSize,int iSize1)
    {
        Arr = new int[iSize];
        Brr = new int[iSize1];
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
        System.out.println("Summation of each array are");
        int iSum =0,iSum1=0;
        for(int i= 0;i <Arr.length; i++)
        {
            iSum = iSum +Arr[i];    
        }
        System.out.println(iSum);
                
        for(int j= 0;j <Brr.length; j++)
        {
            iSum1 = iSum1 +Brr[j];    
        }
        System.out.println(iSum1);
    }
}
class program5
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