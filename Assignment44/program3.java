import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;  
import java.io.*;

public class program3 {
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

      FileWriter myWriter = new FileWriter(filename);
      for(int i=0; i<contents.length; i++) {
        myWriter.write("---------------------------------------------------------------------------------------------------------------");
        myWriter.write(contents[i]);
        myWriter.write("---------------------------------------------------------------------------------------------------------------");
        File currentFile = new File(contents[i]);
        //  BufferedReader br = new BufferedReader(new FileReader(currentFile));
        //  String st;
        //  while ((st = br.readLine()) != null)
        //    myWriter.write(st);
        Scanner fscanner = new Scanner(currentFile);
    
        while (fscanner.hasNextLine())
          myWriter.write(fscanner.nextLine());
      }
      myWriter.close();
   }
}   