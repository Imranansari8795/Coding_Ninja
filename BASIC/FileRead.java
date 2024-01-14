import java.io.*;
import java.util.Scanner;

public class FileRead {
    public static void main(String[] args) throws IOException {

        // already i created file file.txt
        File file = new File("file.txt");

        FileWriter writer = new FileWriter(file);
        
        // Write some content to the file
        System.out.println("Enter string that you want to write in the file");
         Scanner sc = new Scanner(System.in);
         String str = sc.nextLine();
         writer.write(str);
         writer.close();

        // read content from the file.txt
        System.out.println();
        System.out.println("Reading all content from the file and print on the console");
        System.out.println();
        BufferedReader reader = new BufferedReader(new FileReader(file));
        String conte;
        while ((conte = reader.readLine()) != null) {
            System.out.println(conte);
        }
        reader.close();
    }
}
