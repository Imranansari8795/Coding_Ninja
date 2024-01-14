import java.util.Scanner;
public class FIndSecondMax {

    static int SecondLargest(int[] arr)
    {
        int mx = Integer.MIN_VALUE;
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] > mx){
                mx = arr[i];
            }
        }
        
        return mx;
    }
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size:");
        n = sc.nextInt();
        
        int[] arr = new int[n];
      System.out.println("Enter Elements:");
      for(int i = 0; i < n; i++)
      {
          arr[i] = sc.nextInt();
        }
        int max = SecondLargest(arr);
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] == max)
            {
                arr[i] = Integer.MIN_VALUE;
            }
        }
        max = SecondLargest(arr);
      System.out.println("Socond largest element :" + max);
      sc.close();
    }
}
