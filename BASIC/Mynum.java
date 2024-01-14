import javax.imageio.stream.MemoryCacheImageInputStream;

// public class Mynum {
    
//     c1{

//     }
// }

enum Mynum{
    c1{
        // body of constant c1
        
        public int getValue()
        {
            return 100;
        }
    },
    c2{
        // body of constant c1
        
        public int getValue()
        {
            return 10;
        }
        
    },
    c3{
        // body of constant c1
        public int getValue()
        {
        return 0;
        }
    };

    // Provide default implementation for getValue() meathod 

    public abstract int getValue();
}

//  prints the names of the constants, their ordinals, and their  custom value.


public class EnumAbstractMethod{

    public static void main(String[] args) {
        
        for(MyEnum s: MyEnum.values()){

            String name = s.name();

            int ordinal = s.ordinal();

            int days = s.getValue();

            System.out.println("Name = "+name+",ordinal = "+ordinal + ",day = "+day);
        }
    }
}
