package objectclass;

public class entity1 {
     int id;
     String name;
     
	public entity1() {
		
	}
	
public entity1(int id, String name) {
		super();
		this.id = id;
		this.name = name;
	}


public boolean equals(Object obj) {
	
	//instanceof key chek the object if yes then if block exicuted 
	// if we directlly do thet then he chek the type if similat then ok they cast but 
	// not similar then he show ClassCastException
	if(obj instanceof entity1) {
		//type casting downcasting 
		entity1 ref= (entity1) obj;
	    if(ref.id==this.id) {
	    	return true;
	} 
    }
    else {
    	return false;
    }
	return false;
}


public String toString() {
	// TODO Auto-generated method stub
	return super.toString();
}






   
}
