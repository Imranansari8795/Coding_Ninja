import java.io.*;
public class FileReaderExample {
    public static void main(String[] args) {
        try{
            Reader rdr = new FileReader("file.txt");
            int data = rdr.read();    // read byte by byte   hello

            while(data != -1)
            {
                System.out.print((char)data);
                data = rdr.read();
            }
            rdr.close();
        }
        catch(IOException e)
        {
            System.out.println("Exception");
        }
    }
}
