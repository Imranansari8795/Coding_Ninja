

import java.util.Scanner;
public class ArrayRotate {
    
    // static void rotate(int[] arr,int k)
    // {
    //     int n = arr.length;
    //     int[] arr1 = new int[n];   // using new array (extra space)
    //     int j = 0;
    //     for(int i = n - k; i < n; i++)
    //     {
    //         arr1[j++] = arr[i];
    //     }
    //     for(int i = 0; i < n - k; i++)
    //     {
    //         arr1[j++] = arr[i];
    //     }

    //     for(int i = 0; i < n; i++)
    //     {
    //         System.out.print(arr1[i]+" ");
    //     }

    // }
    static void reverse(int[] arr,int k,int i,int j)
    {
        while(i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
     
    }
    static void rotateWithoutTakingExtraSpace(int[] arr,int k)
    {
        int n = arr.length;
        k = k % n;
        // int i = 0;
        // int j = n - k - 1;

        // while(i < j)
        // {
        //     int temp = arr[i];
        //     arr[i] = arr[j];
        //     arr[j] = temp;
        //     i++;
        //     j--;
        // }
        // i = n - k;
        // j = n - 1;

        // while(i < j)
        // {
        //     int temp = arr[i];
        //     arr[i] = arr[j];
        //     arr[j] = temp;
        //     i++;
        //     j--;
        // }

        // i = 0;
        // j = n -1;

        // while(i < j)
        // {
        //     int temp = arr[i];
        //     arr[i] = arr[j];
        //     arr[j] = temp;
        //      i++;
        //      j--;
        // }

        // for(int p = 0; p < n; p++)
        // {
        //     System.out.print(arr[p]+" ");
        // }
        
        reverse(arr, k, 0, n - k - 1);
        reverse(arr, k, n - k, n - 1);
        reverse(arr, k, 0, n - 1);
   

        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size:");
        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.println("rotating number:");
        int k = sc.nextInt();
        k = k % n;
        // rotate(arr,k);


        rotateWithoutTakingExtraSpace(arr,k);
        for(int p = 0; p < n; p++)
        {
            System.out.print(arr[p]+" ");
        }
        sc.close();
    }
}
