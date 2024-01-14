import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class PrintWriterDemoFlush {
    


    public static void main(String[] args) throws IOException {
        PrintWriter pw = new PrintWriter(System.out,false);
        Scanner in = new Scanner(System.in);

        for(int i = 0; i < 5; i++)
        {
            pw.println(in.next());
        }
        //   pw.flush();
          pw.close();
    }
}

//   create a file read from file and write in console
