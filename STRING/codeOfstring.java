import java.util.*;

 class codeOfstring{


     void funct(String s)
    {
        for(int i = 0; i < s.length();i++)
        {
            System.out.print(s.charAt(i)+" ");
        }
    }
    public static void main(String[] args) {
        String str = "abc";
        Scanner sc = new Scanner(System.in);

        String str1 = sc.next();
        str1 = str1 + " "+ str;
        // System.out.println(str1);
        codeOfstring c = new codeOfstring();

        c.funct(str1);
    }

}