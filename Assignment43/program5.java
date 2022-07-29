import java.io.File;
import java.io.IOException;
import java.util.Scanner;  
public class program5 {
   public static void main(String args[]) throws IOException {
    Scanner sc = new Scanner(System.in);  
    System.out.print("Enter Directory name:");  
    String sfile = sc.next();

    String filepath = sfile;
      //Creating a File object for directory
      File directoryPath = new File(sfile);
      //List of all files and directories
      String contents[] = directoryPath.list();
      System.out.println("List of files and directories in the specified directory:");
      for(int i=0; i<contents.length; i++) {
         System.out.println(contents[i]);
      }
   }
}