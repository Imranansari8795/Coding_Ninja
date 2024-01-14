import java.util.Scanner;
public class checkArray {
    



   static int[] double_To_int_Conv(double[] arr)
   {

    int arr1[] = new int[arr.length];
    for(int i = 0; i < arr.length; i++)
    {
        arr1[i] = (int)arr[i];
    }
    return arr1;
   }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int size  = sc.nextInt();

        double arr[] = new double[size];
        System.out.println("Enter the values in array");
        for(int i = 0; i < arr.length; i++)
        {
            double value = sc.nextDouble();
            arr[i] = value;
        }


        System.out.println("Before conversion");
        for(int i = 0 ; i < arr.length; i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        int arr1[] = double_To_int_Conv(arr);

        System.out.println("After conversion");
        for(int i = 0 ; i < arr1.length; i++)
        {
            System.out.print(arr1[i]+" ");
        }

    }
}
