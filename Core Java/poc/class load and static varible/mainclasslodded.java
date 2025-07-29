import java.util.Scanner;

public class mainclasslodded {
    static{
        System.out.println("Static block");
    }
    public static void main(String[] args) {
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
