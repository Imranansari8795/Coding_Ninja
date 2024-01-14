import java.io.*;
import java.util.Scanner;
public class FileReadWrite {
    public static void main(String[] args) throws IOException {
        

        File file = new File("input.txt");

        FileWriter writer = new FileWriter(file);
        
        // Write some content to the file
        System.out.println("Enter string that you want to write in the file");
         Scanner sc = new Scanner(System.in);
         String str = sc.nextLine();
         writer.write(str);
         writer.close();


        String inputFile = "input.txt";
       
        String outputFile = "output.txt";

        // input and output file ka object
        File inputFileObj = new File(inputFile);
        File outputFileObj = new File(outputFile);

        // file read and write object create
        FileReader fileReader = new FileReader(inputFileObj);
        FileWriter fileWriter = new FileWriter(outputFileObj);

        // Read input file line by line and write to output file
        BufferedReader bufferedReader = new BufferedReader(fileReader);
        String line;
        while ((line = bufferedReader.readLine()) != null) {
            fileWriter.write(line + "\n");
        }

       
        bufferedReader.close();
        fileReader.close();
        fileWriter.close();

        System.out.println("File read and write successful.");
    }
}
