interface Printable{
    void print();
}
interface Showable{
    void show();
}

class a7 implements Printable,Showable{
    public void print(){
        System.out.println("Hello");
    }
    public void show()
    {
        System.out.println("Welcome");
    }
    public static void main(String[] args) {
        a7 obj = new a7();
        obj.print();
        obj.show();
    }
}