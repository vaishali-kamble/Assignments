import java.io.File;
import java.util.Scanner;
import java.io.IOException;

public class program2 {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);  
  System.out.print("Provide source file name :");  
  String sfile = sc.next();
        File file = new File(sfile);
        if (file.isFile()) {
            System.out.println("File is a regular file.");
        } else {
            System.out.println("File denoted by this pathname not exists or is not a regular file.");
        }
    }
}