import java.util.*;

public class Student1 {
    

    // int arr[] = new int[N];
    
    public static void main(String[] args) {
        
        int N;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no of student");
        N = sc.nextInt();

        ArrayList<Float> store = new ArrayList<Float>();
        System.out.println("Enter the correct option of the Question:");
        String ans = sc.next();
        for(int i = 1; i <= N; i++)
        {   
            float totalMarks  = 0;
            System.out.println("Enter "+i+" ans that you have marked");
            for(int j = 0 ; j < 4; j++)
            {
                char ch = ans.charAt(j);
                String myAns = sc.next();
                if(ch == myAns.charAt(j))
                {
                    totalMarks += 1;
                    
                }else{
                    totalMarks -= 0.25;
                }
            }
            store.add(totalMarks);

        }

        // Student1  s1 = new Student1();
        for(int i = 0; i < store.size(); i++)
        {
            System.out.println(store.get(i)+" ");
        }

        
    }


}
