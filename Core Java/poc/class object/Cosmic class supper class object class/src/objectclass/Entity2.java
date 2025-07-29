package objectclass;

public class Entity2 {
      int id;
      String name;
      
      public Entity2() {
		// TODO Auto-generated constructor stub
	}
	public Entity2(int id, String name) {
		this.id = id;
		this.name = name;
	}
	@Override
	public String toString() {
		return "person{ id= " +this.id+"name is = "+this.name+"}";
		
	}
      
      
}
