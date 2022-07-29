import java.util.*;
import java.io.*;

class ArrayDemo
{  
    private int [] Arr;

    int Size, i = 0;
    public boolean Check()
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
    
        System.out.print(" Please Enter Number : ");
		int num = sc.nextInt();	
		
		for(i = 0; i < Arr.length; i++)
		{
			if(Arr[i] == num)
			{
             return true;
			}
		}
        return false;
	}		
}
class program1
{
    public static void main(String arg[])
    {
        ArrayDemo obj = new ArrayDemo();
        boolean bret =obj.Check();

        if(bret == true)
        {
        		System.out.println("number is present");
        }
        else
        {
        		System.out.println("number is not present");

        }
    }
}
