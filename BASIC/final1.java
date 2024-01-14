final public class final1 {

    final int a = 5;
    
    // public static void main(String[] args) {
    //     final1 f1 = new final1();
    //     f1.a = 10;
    //     System.out.println(f1.a);
    // }
    
}

class parent extends final1{
   void f2()
    {
        System.out.println("f2");
    }
}
class child extends parent{
    void f2()
    {
        System.out.println("child f2");
    }

    public static void main(String[] args) {
        child c1 = new child();
        c1.f2();
    
    }
}
