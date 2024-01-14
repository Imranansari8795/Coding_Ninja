import java.util.Scanner;

public class addition {
    

    static int  add(int a,int b,int ...c){

        int sum = a + b;

        for(int i : c)
        {
            sum += i;
        }
        return sum;

    }

    public static void main(String ...args) {
        
        Scanner sc = new Scanner(System.in);

    //   System.out.print("sum = "+ add(4, 5,3,4,5,6));
      System.out.print("sum = "+ add(0,0));


// System.out.println("size");
//     int totlnum = sc.nextInt();

//     int sum = 0;
// for(int i = 0; i < totlnum;i++)
// {
//     int value = sc.nextInt();
//    sum += value;
// }

//     System.out.println("sum = "+sum);
    }
}
