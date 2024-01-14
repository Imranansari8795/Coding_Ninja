import java.util.Scanner;
public class PairSum {

    public int sum(int[] arr,int x){
    int ans = 0;
        for(int i = 0; i < arr.length; i++)
        {
            for(int j = i + 1; j < arr.length; j++)
            {
                    if(arr[i] + arr[j] == x)
                    {
                            ans++;
                    }
            }
        }
        return ans;
    }
 
    int uni = 0;
    int UniqueNum(int[] arr)
    {
        for(int i = 0; i < arr.length; i++)
        {
            uni = uni^arr[i];
        }
        return uni;
    }
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        PairSum ps = new PairSum();
        System.out.println("Enter size of Array:");
        int n = sc.nextInt();
        int[] arr = new int[n];
        
        System.out.println("Enter num:");
        // int num = sc.nextInt();
        // int[] arr;
        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
            
        }

        // System.out.print("count total pair whose sum is  ::"+ num +  ps.sum(arr,num));
        System.out.println("Unique num is:" + ps.UniqueNum(arr));
      
        sc.close();
    }
}
