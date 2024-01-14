
import java.util.Scanner;
public class Demo_Array {
    
        double percentage(float arr[])
        {
            double sum = 0;
            for(int i = 0; i < arr.length; i++)
            {
                sum = sum + arr[i];
            }
            double perc = sum/arr.length;
            return perc;
        }

        public static void main(String[] args) {
            
        
    Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size");
        int size = sc.nextInt();
        // int marks[];
        // marks = new int[size];

        float[] marks = new float[size];
        for(int i = 0; i < size; i++)
        {
            marks[i] = sc.nextFloat();
        }

        Demo_Array d1 = new Demo_Array();
        System.out.println("perventage = "+d1.percentage(marks)+"%");
        System.out.println(marks.getClass().getName());
        }
    }

