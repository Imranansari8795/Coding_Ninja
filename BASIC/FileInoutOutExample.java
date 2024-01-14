import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileInoutOutExample {
    

    public static void main(String[] args) {
        FileInputStream fin;
        FileOutputStream fout;

        try{

            fin = new FileInputStream("hello.txt");
            fout = new FileOutputStream("file.txt");
            int i;
            
            while((i = fin.read())!= -1)
            {
                fout.write(i);
            }
        }catch(IOException e){
            System.out.println("Exception");
        }
    }
}
