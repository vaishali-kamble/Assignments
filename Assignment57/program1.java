import java.lang.*;
import java.util.*;
class Array
{

    public int Arr[];

    public int Brr[];
    
    public Array(int iSize)
    {
        Arr = new int[iSize];
        Brr = new int[iSize];
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
        System.out.println("Elements of the array are");
        for(int i= 0;i <Arr.length; i++)
        {
           System.out.print(Arr[i]+"  ");
        }
        for(int j= 0;j <Brr.length; j++)
        {
           System.out.print(Brr[j]+"  ");
        }
        System.out.println();
   }
}

class program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();

        Array aobj = new Array(size);
        aobj.Accept();
        aobj.Display();

    }
}