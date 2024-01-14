import java.io.FileWriter;
import java.io.IOException;
import java.io.Writer;

public class FileWriterExample {

    public static void main(String[] args) {
        try {
            Writer w = new FileWriter("input.txt");
            String content = "I Love My Country ";
            // String content2 = "hey! guys";
            w.write(content);
            // w.write(content2);
            // w.write(content, 3, 5);
            // w.write(67);

            char[] ch = content.toCharArray();
            // w.write(ch[4]);
            // w.write(ch, 3, 5);
            w.close();

            System.out.println("Done");
        } catch (IOException e) {
            System.out.println("Exception");
        }
    }
}

//I Love My Countryove MCvove M
