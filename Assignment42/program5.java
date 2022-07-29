import java.util.Scanner;
import java.io.File;
import java.io.IOException;
public class program5 {
   public static void main(String args[]) throws IOException {
    
    String fname;
    Scanner scan = new Scanner(System.in);
    
    // enter filename along with its extension
    System.out.print("Enter the Name of the directory: ");
    fname = scan.nextLine();
      //Creating a File object for directory
      File directoryPath = new File(fname);
      //List of all files and directories
      String contents[] = directoryPath.list();
      System.out.println("List of files and directories in the specified directory:");
      for(int i=0; i<contents.length; i++) {
         System.out.println(contents[i]);
      }
   }
}