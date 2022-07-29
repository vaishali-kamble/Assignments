import java.util.Scanner;
import java.io.File;  
import java.io.IOException;  
public class program4   
{  
public static void main(String[] args)   
{     
    String fname;
    Scanner scan = new Scanner(System.in);
    
    // enter filename along with its extension
    System.out.print("Enter the Name of File: ");
    fname = scan.nextLine();

File file = new File(fname); //initialize File object and passing path as argument  
boolean result;  
try   
{  
result = file.createNewFile();  //creates a new file  
if(result)      // test if successfully created a new file  
{  
System.out.println("file created "+file.getCanonicalPath()); //returns the path string  
}  
else  
{  
System.out.println("File already exist at location: "+file.getCanonicalPath());  
}  
}   
catch (IOException e)   
{  
e.printStackTrace();    //prints exception if any  
}         
}  
}  

