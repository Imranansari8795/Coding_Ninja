import javax.sound.sampled.SourceDataLine;

// public class parent {
//     public parent(int a)
//     {
//         System.out.println("Parent class");
//     }
// }

// class parent2 extends parent{
//     public parent2()
//     { 
//         super(7);
//         System.out.println("Parent2 class");
//     }
// }

// class child extends parent2{
//     public child()
//     {
//         System.out.println("child class");
//     }
//     public static void main(String[] args) {
//         child c = new child();
//     }
// }











class parent{}
class Child extends parent{}
class TestInstanceOf  {
   public static void main(String [] rk){
		parent p = new parent();
		Child c = new Child();
		System.out.println(p instanceof Child);
		System.out.println(p instanceof parent);
		System.out.println(c instanceof parent); 
      }
     }

