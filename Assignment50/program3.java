import java.util.*;
import java.io.*;

class ArrDemo
{  
    private int [] Arr;

    int Size, i = 0,iCnt = 0;
    public int Check()
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
		
		for(i = Arr.length-1; i >=1; i--)
		{
			if(Arr[i] == num)
			{
                iCnt = i;
                break;
			}
		}
        return iCnt;
	}		
}
class program3
{
    public static void main(String arg[])
    {
        ArrDemo obj = new ArrDemo();
        int iret =obj.Check();

        {
        		System.out.println("Last occurence of number is "+iret);
        }
    }
}
