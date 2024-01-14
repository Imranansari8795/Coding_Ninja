import java.util.Scanner;

public class SortZeroOne {

    static void print(int[] arr, int n)
    {
        for(int i = 0; i < n; i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
 static void SortZero(int[] arr,int n)   // method one 
    {
        int count = 0;
        for(int i = 0; i < n; i++)
        {
  
  
            if(arr[i] == 0)
            {
                count++;
            }
        }
        for(int i = 0; i < count; i++)
        {
            arr[i] = 0;
        }
        for(int i = count; i < n; i++)
        {
            arr[i] = 1;
        }
        print(arr,n);
    }

    static void SortZeroOneWithPointer(int[] arr, int n)
    {
        int i = 0; 
        int j = n - 1;

        while(i < j)
        {
            if(arr[i] == 1 && arr[j] == 0)
            {
                arr[j] = arr[i] + arr[j];
                arr[i] = arr[i] - arr[j];
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                i++;
                j--;
            }
            if(arr[i] == 0)
            {
              i++;
            }
            if(arr[j] == 1)
            {
                j--;
            }       
        }
        
        print(arr,n);

    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Size:");
        int n = sc.nextInt();
        int arr[] = new int[n];

    
        for(int i = 0 ; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }
        // SortZero(arr,n);
        SortZeroOneWithPointer(arr, n);
        sc.close();
    }
}
