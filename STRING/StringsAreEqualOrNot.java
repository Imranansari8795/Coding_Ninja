public class StringsAreEqualOrNot {
    

    
    public static void main(String[] args)
    {
        String str1 = "abc";
        String str2 = "abc";

        String str3 = new String("abc");
        
        System.out.println(str2);
        if(str1 == str2)
        {
            System.out.println("equals");
        }else{
            System.out.println("Not equals");
        }
        if(str1.equals(str3))
        {
            System.out.println("equals");
        }else{
            System.out.println("Not equals");
        }

    }
}
