import javax.sound.sampled.SourceDataLine;

public class OuterClass1 {
    
    int a;
    String s;
    float f;
    static int p = 50;     // static variable

    public OuterClass1(int a,String s,float f)    // constructtor
    {
        this.a = a;
        this.s = s;
        this.f = f;
        sum(a, f);
    }

void sum(int a,float f)    // non static method
{
    System.out.println("outer Non static method");
    System.out.println("sum : "+ (a + f));
}

public static void show()     // static method  
{
    System.out.println("outer Static method");
}

class Inner1{     // non static inner class treated as member of outer class 
    int inner1num = 10;
    static int inner1num1 = 30;   // static inner1 variable 
    
    void inner1hello()      // inner1 non static variable 
    {
        System.out.println("inner1 Non static method");
    }
    
    static void inner1hello1()    //inner1 static variable 
    {
        System.out.println("inner1 static method");
    }
    // System.out.println(a);
    
}

static class Inner2{
  int inner2num = 40;
  static int inner2num1 = 20;

  void inner2hello()
  {
    System.out.println("inner2 non static hello");
  }
  static void inner2hello1()
  {
    System.out.println("inner2 static hello");
  }

}
}

class Demo{
    public static void main(String[] args) {
        OuterClass1 outer = new OuterClass1(1, "imran", 2);
        System.out.println(outer.a +" "+ outer.s+" "+outer.f);
        System.out.println(outer.p);

        outer.show();


        // static class object creation

        OuterClass1.Inner2 obj = new OuterClass1.Inner2();
        
        System.out.println(obj.inner2num);
        obj.inner2hello1();obj.inner2hello();
        obj.show();
        // inner non static class object creation

        OuterClass1.Inner1 obj1 = outer.new Inner1();   

        obj1.show();
    }
}
