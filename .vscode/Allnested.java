class AllNested{
    // static nested class 
    Static class nestedstatic 
    {
        int a = 10;
        static int b = 20;
        void display()
        {
            System.out.println("non static a = "+a);
            System.out.println("static b = "+b);
        }
    }
    // inner class 
    class inner{
        int a = 10;
        final static int b = 20;
        //static int b = 20;
        
    }
}