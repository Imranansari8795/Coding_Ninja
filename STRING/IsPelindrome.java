import java.util.*;
import java.util.Scanner;
public class IsPelindrome {
    

    boolean isPelin(String str)
    {
         
        for(int i = 0; i < (str.length())/2; i++)
        {
            if(str.charAt(i) != str.charAt((str.length()) - i - 1))
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        IsPelindrome x = new IsPelindrome();
        boolean check  = x.isPelin(str);
        if(check)
        {
            System.out.println(1);
        }else{
            System.out.print(0);
        }
    }
}
