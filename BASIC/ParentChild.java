public class ParentChild {
    public ParentChild()
    {
        System.out.println("first constructor");
    }
}

class parent2 extends ParentChild{
    public parent2()
    {
        System.out.println("second constructor");
    }
}
class parent3 extends parent2{
    public parent3()
    {
        System.out.println("third constructor");
    }
}
class parent4 extends parent3{
    public parent4()
    {
        System.out.println("fourth constructor");
    }
}
class child extends parent4{
    public child()
    {
        System.out.println("child constructor");
    }
    public static void main(String[] args) {
        child c1 = new child();
    }
}
