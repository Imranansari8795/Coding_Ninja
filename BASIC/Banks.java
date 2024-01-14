

class A{
    void lol()
    {
        System.out.println("LOL");
    }
}
class B extends A{

    void lol()
    {
        super.lol();
        System.out.println("LOL  -> 2");
    }
}
public class Banks {
    public static void main(String[] args) {
        // System.out.println("hello");
        B b1 = new B();
        b1.lol();
    }
}
