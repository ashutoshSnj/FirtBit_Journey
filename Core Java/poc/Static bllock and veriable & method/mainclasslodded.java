import java.util.Scanner;

public class mainclasslodded {
    static int id;
    int newid;
    static{
        System.out.println("Static block");
    }
    public static void main(String[] args) {

        classload1.id=12;
        classload1.newid=45;
        classload1 ref=new classload1();
        ref.newid=23;
        ref.id=12;
      














  Scanner sc=new Scanner(System.in);
  System.out.println("Enter your no = ");
  int n=sc.nextInt();
  
  if(n==1){
      classload1 var=new classload1();
  }
  else{
    classload2 var=new classload2();
  }
}
}
