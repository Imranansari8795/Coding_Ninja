
@FunctionalInterface
interface InterfacesPractice{

    void show();
}

class Test{
    // @Override
    public void show()
    {
        System.out.println("I am in show method abstract");
    }
    public static void main(String[] args) {
        
     
     Test t1 = new Test();
      t1.show();
    }
}


