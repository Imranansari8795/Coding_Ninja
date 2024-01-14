class Parent1 {
    void show(){
        System.out.println("Parent's show()");
    }
}

class Child extends Parent1{
    // void show()
    // {
    //     System.out.println("Child's show()");
    // }
}

class MethodOverride
{
    public static void main(String[] args) {
        // Parent1 p1  = new Parent1();
        // p1.show(5);
        // Child obj2 = new Child();
        // obj2.show(4);


        Parent1 obj2 = new Child();
        obj2.show();


    }
}
