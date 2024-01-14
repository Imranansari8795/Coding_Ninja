interface LanbdaExpression{
    void animal();
}
class Test{

public static void main(String[] args) {
    
    LanbdaExpression l1 = () ->{
        System.out.println("I am a dog!");
    };
    l1.animal();
}
}
