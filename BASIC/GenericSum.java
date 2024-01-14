public class GenericSum {
    public static <T extends Number> double sum(T num1, T num2) {
        return num1.doubleValue() + num2.doubleValue();
    }

    public static void main(String[] args) {
        int a = 5;
        double b = 3.14;
        float c = 1.234f;

        System.out.println(sum(a, b)); // Output: 8.14
        System.out.println(sum(b, c)); // Output: 4.374
    }
}
