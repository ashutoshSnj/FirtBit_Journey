 public class Syntax{
  
    public static void main(String[] args){
    
        String name="Ashutosh";
        String name1="Ashutosh";

       // System.out.println(name +"  "+name1);
        System.out.println(name.hashCode() +" "+ name1.hashCode());
        //                 -608687249              -608687249
    
        // both have same hashcode becose only one object  is created in string pool and both refrence are point them
        // string constant pool is part of heap memory all string are stroe in that pool
        // name  varibles are creat on stack and Ashutosh are created on the heap resureved area for string 
        // which is string constant pool.
        // then name1 creat on stacke the you write valuea is Ashutosh jvm cheek the exactlliy mathc value on this string constant pool
        // if it is match then it will return the same reference  from string constant pool .
    
        String name2=new String("Ashutosh");

        System.out.println(name.hashCode() +"  "+name2.hashCode());
                            //-608687249          -608687249

        if(name==name1){
            System.out.println("both are same");
        }

        else{
            System.out.println("both are not same");
             }
     }
}
