
import java.util.Scanner;
import java.util.random.RandomGenerator.LeapableGenerator;
import java.util.*;

// import javax.sound.sampled.SourceDataLine;
public class jacked {
    
    public static void main(String[] args) {
        
    
Scanner sc = new Scanner(System.in);
    System.out.println("Enter row size");
    int rowsize = sc.nextInt();
    int arr[][] = new int[rowsize][];

    for(int i = 0; i < arr.length; i++)
    {
        System.out.println("Enter col size");
        int colsize = sc.nextInt();

        arr[i] = new int[colsize];
    }

    for(int i = 0; i < arr.length;i++)
    {
        System.out.println("Enter "+i+" row data");
        for(int j = 0; j < arr[i].length; j++)
        {
            int value = sc.nextInt();

            arr[i][j] = value;
        }
    }

    System.out.println("output entered data");
    for(int i = 0; i < arr.length;i++)
    {
        for(int j = 0; j < arr[i].length; j++)
        {
            // int value = sc.nextInt();

            // arr[i][j] = value;

            System.out.print(arr[i][j]+" ");
        }
        System.out.println();
    }

}
}
