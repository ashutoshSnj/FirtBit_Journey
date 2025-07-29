public class hashcode {
    String name;
    int id;
    public hashcode(String name, int id) {
        this.name = name;
        this.id = id;
    }
    public hashcode(){

    }
    public static void main(String[] args){
           hashcode S1= new hashcode("Ashu", 01);
           hashcode S2=new hashcode("Ashu", 02);
           System.out.println(S1.name.hashCode() +"  "+S2.name.hashCode());
    }
}
