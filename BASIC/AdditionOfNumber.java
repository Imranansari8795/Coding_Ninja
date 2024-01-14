import java.util.Scanner;

interface AdditionOfNumber {
    int  add(int a,int b);
    int sub(int a, int b);
}

//  class c implements AdditionOfNumber{
// public static void main(String[] args) {
//     c c1 = new c();
//     Scanner sc = new Scanner(System.in);
//     int a = sc.nextInt();
//     int b = sc.nextInt();
// System.out.println("sum of two number :" + c1.add(a, b));
// System.out.println("sub of two number :" + c1.sub(a, b));

// }
// @Override
// public int add(int a,int b)
// {
//     return a + b;
// }
// @Override
// public int sub(int a,int b)
// {
//     return a - b;
// }
// }
// @FunctionalInterface
interface Temp extends AdditionOfNumber{
    void mul(int a,int b);
}

class Test{
    int add(int a,int b)
    {
        return a + b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }
    int mul(int a,int b)
    {
        return a*b;
    }

    public static void main(String[] args) {
        Test t1 = new Test();
        System.out.println("sum" + t1.add(3, 4));
        System.out.println("sub" + t1.sub(3, 4));
        System.out.println("sum" + t1.mul(3, 4));
        // System.out.println("sum" + t1.add(3, 4));
    }
}
