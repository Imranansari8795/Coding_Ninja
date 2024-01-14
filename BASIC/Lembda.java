import java.util.Scanner;

@FunctionalInterface
interface Lembda{
    int mul(int a,int b);
}

class Demo{
    public static void main(String[] args) {
        Lembda l1 = (a,b) ->{
            return a * b;
        };
        
        Scanner  sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("mul = "+ l1.mul(a,b));
       
    }
}
