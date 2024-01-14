enum Mobile{
    Samsung(400),Nokia(250),Motorola(325);

    int price;

    Mobile(int p){
        price =  p;
    }


    int ShowPrice()
    {
        return price;
    }
}




public class EnumDemo {
    public static void main(String[] args) {
        System.out.println("CellPhone List");


        for(Mobile m: Mobile.values())
        {
            System.out.println(m+" costs "+m.ShowPrice()+" dollars");
        }


        Mobile ret;

        ret = Mobile.valueOf("Samsung");             //    convert string into enum object

        System.out.println("Selected : "+ret);
    }
}
