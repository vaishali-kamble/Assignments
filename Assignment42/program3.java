/*//write java program and accept file name from user open that file in write mode and write some data at the end of the file.

import java.util.Scanner;
import java.io.*;  
class program3
{  
public static void main(String args[])
{  
	try
	{  
        Scanner in = new Scanner(System.in);
        System.out.println("What is the filename?");
        String input = in.nextLine();
     	FileOutputStream fout=new FileOutputStream(input,true);  
     	String s="Vaishali 628 Marvellous Infosystems";  
     	byte b[]=s.getBytes();//converting string into byte array  
     	fout.write(b);  
     	fout.close();  
     	System.out.println("success...");  
	}
	catch(Exception e){System.out.println(e);}  
}  
} 