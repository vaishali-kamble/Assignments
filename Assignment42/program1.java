
import java.util.Scanner;
import java.awt.Desktop;  
import java.io.*;  
public class program1   
{  
public static void main(String[] args)   
{  
try  
{  
 
String fname;
Scanner scan = new Scanner(System.in);

System.out.print("Enter the Name of File: ");
fname = scan.nextLine();   
//constructor of file class having file as argument  
File file = new File(fname);   
if(!Desktop.isDesktopSupported())//check if Desktop is supported by Platform or not  
{  
System.out.println("not supported");  
return;  
}  
Desktop desktop = Desktop.getDesktop();  
if(file.exists())         //checks file exists or not  
desktop.open(file);              //opens the specified file  
}  
catch(Exception e)  
{  
e.printStackTrace();  
}  
}  
}  
