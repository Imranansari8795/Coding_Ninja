// import javax.naming.NamingException;
import java.util.Scanner;
public class lastOccurence{

public int last(int[] arr, int x){
   
    // int lastOcc = -1;
    int coutn = 0;
    for(int i = 0; i < arr.length; i++)
    {

        if(arr[i] > x)
        {
            // lastOcc = i;
            coutn++;
        }
    }
    // return lastOcc;
    return coutn;
}

public static void main(String[] args) {
    
 lastOccurence lt = new lastOccurence();
 
 int[] arr = {0,2,3,4,4,4,5,4,6,5};
   Scanner sc = new Scanner(System.in);
 int x = sc.nextInt();

 int lastoccF = lt.last(arr, x);

//  System.out.print("Last occurence of "+ x+" is :" +lastoccF);

System.out.print(lastoccF);
sc.close();
}
}