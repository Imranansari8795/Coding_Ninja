

public class StringBuilderEnsureCapcity {
    // static{
    // enum month{
    //     jan(45),fun(23),march(84);
    //     int day;
    //     month(int a){
    //         day = a;
    //     }
    // }
    // enum day{
    //     jan1(45),fun2(23),march3(84);
    //     int day1;
    //     day(int a1){
    //         day1 = a1;
    //     }
    // }
    
    StringBuilderEnsureCapcity()
    {
        
        a = 10;
        
    }
    final int a;
    
    // }
    public static void main(String[] args) {
        // StringBuilder bs6  = new StringBuilder();
        // System.out.println(bs6.capacity());   // 16

        // StringBuilder bs5 = new StringBuilder("Hello");    // 16+5 = 21
        // System.out.println(bs5.capacity());


        // StringBuilder bs1 = new StringBuilder(7);
        // System.out.println(bs1.capacity()); // 7

        // bs1.ensureCapacity(9);
        // System.out.println(bs1.capacity()); // 16

        // StringBuilder bs4 = new StringBuilder(10);
        // bs4.ensureCapacity(9);
        // System.out.println(bs4.capacity()); // 10

        // StringBuilder bs2 = new StringBuilder("a");
        // bs2.append("abcd");
        // System.out.println("bs2 := "+bs2.capacity()); // 17
        // bs2.ensureCapacity(18);
        // System.out.println(bs2.capacity()); // 36

        // StringBuilder bs3 = new StringBuilder();
        // System.out.println(bs3.capacity()); // 16

        // for(month m : month.values())
        // {
        //     System.out.println(m);
        // }
        // for(day d : day.values())
        // {
        //     System.out.println(d);
        // }

            // a = 10;
        // final int s;
    StringBuilderEnsureCapcity b1= new StringBuilderEnsureCapcity();
    // System.out.println("a="+b1.s);

    // System.out.println(s);
    System.out.println(b1.a);
    }
}
