// import java.util.ArrayList;
// import java.util.Iterator;

// public class TestCollection {
//     public static void main(String[] args) {
//         ArrayList<String> list = new ArrayList<String>();
//         list.add("Ravi");
//         list.add("Vijay");
//         list.add("Raj");
//         list.add("Ajay");
//         list.add("Ramesh");


//         Iterator itr = list.iterator();

//         while(itr.hasNext()){ 
//             System.out.print(itr.next()+" ");
//         }
//     }


// second code 


import java.util.ArrayList;
import java.util.Iterator;
import java.util.TreeSet;

public class TestCollection {
    public static void main(String[] args) {
        TreeSet<String> treeSet = new TreeSet<>();
        treeSet.add("Bavi");
        treeSet.add("Aijay");
        treeSet.add("Raj");
        treeSet.add("Camesh");
        treeSet.add("Ajay");
        treeSet.add("Ramesh");
        treeSet.add("Camesh");


        Iterator<String> itr = treeSet.iterator();

        while(itr.hasNext()){ 
            System.out.print(itr.next()+" ");
        }
    }



}
