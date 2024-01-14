// import java.io.*;
// import java.util.*;
// import java.text.*;
// import java.math.*;
// import java.util.regex.*;

// public class Solution {

//     public static void main(String[] args) {
//         /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
//         Scanner sc =  new Scanner(System.in);
//         double a = sc.nextDouble();
//         double b = sc.nextDouble();
//         double c = sc.nextDouble();
        
//         if(a < 0 && a > 100 || b < 0 && b > 100 || c < 0 && c > 100)
//         {
//             System.out.println("invalid input");
//         }else{
//             Double average = (a + b + c)/3;
            
//             int avg = average.intValue();
//             System.out.println(avg);
//         }
//     }
// }




// import java.io.*;
import java.util.*;
// import java.text.*;
// import java.math.*;
// import java.util.regex.*;

// public class Solution {

//     public static void main(String[] args) {
//         /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
//         Scanner sc = new Scanner(System.in);
        
//         int side_a = sc.nextInt();
//         int side_b = sc.nextInt();
//         int side_c = sc.nextInt();
//         if(side_a == 0 || side_b == 0 || side_c == 0)
//         {
//             System.out.println(0);
//         }else{
            
//             float s = (side_a + side_b + side_c)/2.0f;
//             double area = Math.sqrt(s*(s - side_a)*(s - side_b)*(s - side_c));

//             System.out.println(s);
//             System.out.println(area);
//             sc.close();
//         }
        
//     }
// }



// class Solution {

//     public:
    
//         vector<int> twoSum(vector<int>& nums, int target) {
//             // vector<int>v;

//             Vector<Integer> v = new Vector<Integer>();
//             for(int i = 0; i < nums.size(); i++)
//             {
//                 for(int j = i + 1; j < nums;j++)
//                 {
//                     if(nums[i] + nums[j] == takget)
//                     {
//                         v.push_back(i);
//                         v.push_back(j);
//                     }
//                 }
//             }
//         }
//     };







// import java.io.*;
// import java.util.*;
// import java.text.*;
// import java.math.*;
// import java.util.regex.*;
// import java.util.Scanner;
// public class Solution {

//     public static void main(String[] args) {
//         /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
//         Scanner sc = new Scanner(System.in);
//         String str = sc.nextLine();
        
    

//     boolean b1  = false;
//     if(str.contains("was") || str.contains("were"))
//     {
//         b1 = true;
//     }
//     if(b1)
//     {
//         String newstring = str.replace("was", "is");
//         String thirdstring = newstring.replace("were","are");
//         System.out.println(thirdstring);
//     }else{
//         System.out.println("Invalid");
//     }
    
// }
// }



import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner sc = new Scanner(System.in);
        
        String search = sc.nextLine();
        String str = sc.nextLine();
        int count = 0;
        while(str.contains(search))
        {
            str = str.replaceFirst(search,"");
            // System.out.println("hello");
            count++;
        }
        System.out.println(count);
    }
}