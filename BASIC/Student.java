 class Student {
     int id;
    String name;
   char ch;
    int p;
    void insertValues(int id, String name)
    {
        this.id = id;
        this.name = name;
        
       
    }
    void display(){
        System.out.println(id+" "+name);
        System.out.println(ch + p + ch + p);
    }
    }
    class TestStudent1{
    public static void main(String args[]){
        Student s1=new Student();
        Student s2 = new Student();
 
        
    
    s1.insertValues(435,"Imran");
    s2.insertValues(900,"raju");

    s1.display();
    s2.display();
    
    }
    }











// class Student{
//     int id;
//     String name;
//     }
//     class TestStudent1{
//     public static void main(String args[]){
//     Student s1=new Student();
//     System.out.println(s1.id);
//     System.out.println(s1.name);
//     }
//     }
