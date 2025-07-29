public class second {
    static int no=12;
    static int pqr;
    static{
         pqr=no*12;
        System.out.println("Static block exicut atomaticall");
    }

    public static void main(String []args){
              second ref=new second();
              check(ref);
              start ref1=new start (12,"ashutosh");
              ref1.name="shelke";
}
            public static void check(second ass){
                System.out.println(no +" "+pqr);
                System.out.println(pqr);
            }
            public static void ass(){
                start ref=new start(2,"Ashutosh");
                ref.name="shelke";
                
             }
            
}
    
