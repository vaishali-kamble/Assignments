import java.io.File;  
import java.util.Scanner;  
public class program3 {  
    //Main() method start  
    public static void main(String args[]) {        
      //Using Scanner class to get the path from the user where he wants to create a folder.  
      System.out.println("Enter the path where you want to create a folder: ");  
      Scanner sc = new Scanner(System.in);  
      String path = sc.next();  
      System.out.println("Enter the name of the desired a directory: ");  
      path = path+sc.next();  
      //Instantiate the File class   
      File f1 = new File(path);  
      //Creating a folder using mkdir() method  
      boolean bool = f1.mkdir();  
      if(bool){  
         System.out.println("Folder is created successfully");  
      }else{  
         System.out.println("Error Found!");  
      }  
   }  
}  
