import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;  
public class program2 {
   public static void main(String args[]) throws IOException {
    Scanner sc = new Scanner(System.in);  
    System.out.print("Enter Directory name:");  
    String sfile = sc.next();

    System.out.print("Enter file name:");  
    String filename = sc.next();

    String filepath = sfile;
      //Creating a File object for directory
      File directoryPath = new File(sfile);
      //List of all files and directories
      String contents[] = directoryPath.list();
      //File outputFile = new File("C:\\Users\\MyName\\filename.txt");
      //System.out.println("List of files and directories in the specified directory:");

      FileWriter myWriter = new FileWriter(filename);
      for(int i=0; i<contents.length; i++) {
        myWriter.write(contents[i]);
      }
      myWriter.close();
   }
}   