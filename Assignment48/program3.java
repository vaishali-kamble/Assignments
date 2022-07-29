import java.util.*;
import java.io.*;

class ArrayDemo
{  
    private int [] Arr;

    int Size, i = 0;
    
    public void Accept()
    {
        Scanner sc = new Scanner(System.in);
	 
		System.out.print(" Please Enter Number of elements in an array : ");
		int Size = sc.nextInt();	
		
		int [] Arr= new int[Size];
		
		System.out.print(" Please Enter " + Size + " elements of an Array  : ");
		for (i = 0; i < Size; i++)
		{
			Arr[i] = sc.nextInt();
		}  
    
		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] %5  == 0)&&(Arr[i]%2==0))
			{
             
        		System.out.println(Arr[i]);
			}
			}
		}		
}
class program3
{
    public static void main(String arg[])
    {
        ArrayDemo obj = new ArrayDemo();
        obj.Accept();
    }
}
