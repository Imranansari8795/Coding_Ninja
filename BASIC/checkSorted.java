
import java.util.Arrays;

public class checkSorted {
    public boolean sorted(int[] arr1) {
        int i = 0;
        boolean check = true;
        for (i = 0; i < arr1.length; i++) {

            if ( (i + 1) < arr1.length && arr1[i] > arr1[i + 1]) {
                // return false;
                check = false;
                break;
            }
        }
        return check;
    }


    public int[] smallestLargest(int[] arr)
    {
    //   Arrays.sort(arr);
      int[] ans = {arr[0],arr[arr.length - 1]};
      int arr1[] = arr;
      arr1 = arr.clone();
      arr1 = Arrays.copyOf(arr, 3);
      arr1 = Arrays.copyOfRange(arr, 0,arr.length -1);
      for(int i = 0 ; i < arr1.length; i++)
      {
        System.out.println(arr[i]);
      }
      return ans;

    }
    public static void main(String[] args) {
        // int[] arr1 = { 1, 2, 300, 4, 5, 100 };
        // checkSorted ck = new checkSorted();

        // System.out.println(ck.sorted(arr1));
        // System.out.print(a);

        // int arr[] = ck.smallestLargest(arr1);
        // System.out.println("smallest :" + arr[0]);
        // System.out.println("Largest :"+arr[1]);

        byte b = 30;
        // System.out.println(~b);
        // System.out.println(Integer.toBinaryString(~b));
        // byte c = -53;
        
        // System.out.println(~c);
        // System.out.println(Integer.toBinaryString(~b));

        String s1 = String.format(Integer.toBinaryString(~b & 0xFF)).replace(' ','0');
        System.out.println(s1);


    }
}
