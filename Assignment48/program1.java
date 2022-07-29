import java.util.*;
import java.io.*;

class ArrayDemo
{  
    private int Size, i = 0;
    int EvenSum =0,OddSum=0;
    int [] Arr; 

    public void Accept()
    {
      Scanner sc = new Scanner(System.in);
	 
		System.out.print(" Please Enter Number of elements in an array : ");
		Size = sc.nextInt();	
		
		int [] Arr= new int[Size];
		
		System.out.print(" Please Enter " + Size + " elements of an Array  : ");
		for (i = 0; i < Size; i++)
		{
			Arr[i] = sc.nextInt();
		}  
    }

    public void oddeven()
    {
		for(i = 0; i < Arr.length; i++)
		{
			if(Arr[i] % 2 == 0)
			{
				EvenSum = EvenSum + Arr[i]; 
			}
			else
			{
				OddSum = OddSum + Arr[i]; 
			}
		}		
		System.out.println("\n The Sum of Even Numbers in this Array = " + EvenSum);
		System.out.println(" The Sum of Odd Numbers in this Array = " + OddSum);
    }

    public void diff()
    {
      int diff=0;
      diff = EvenSum-OddSum;
		System.out.println(" The difference between Odd Numbers and even Numbers in this Array = " + diff);
    }
}
class program1
{
    public static void main(String arg[])
    {
        ArrayDemo obj = new ArrayDemo();
        obj.Accept();
        obj.oddeven();
        obj.diff();
    }
}
