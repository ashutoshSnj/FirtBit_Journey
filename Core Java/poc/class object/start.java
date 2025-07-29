public class start{
    int rollno;
    String name ;
    static double price=1234;
       start(){
            
       }
    public start(int rollno, String name) {
        this.rollno = rollno;
        this.name = name;
    }
    public static void main(String []args){
        int[] ref =new int[]{1,2,4,5,6,8};
        start startobj=new start(78,"Ashutosh");
            startobj.printno(ref);
           ass(ref); 
        
    }
         public void printno(int[] ref){
            System.out.println("non static call");
            for(int i=0;i<ref.length;i++){
                System.out.println(ref[i]);
            }
            System.out.println(this.name + this.rollno + start.price);

          }
          public static void  ass(int[]ar){
          System.out.println("static call");
          start ash=new start(1,"shelke");
          System.out.println(  price);
          ash.printno(ar);
            
          }

           
}