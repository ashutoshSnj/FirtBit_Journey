package AccountStream;

public class Account {
int id ;
int age;
String name;
Double Salary;
String Gender;

public Account(int i, int j, String string, String string2) {
	
}
public Account(int id, int age, String name, double  i, String gender) {
	this.id = id;
	this.age = age;
	this.name = name;
	this.Salary = i ;
	this.Gender = gender;
}
public int getId() {
	return id;
}
public void setId(int id) {
	this.id = id;
}
public int getAge() {
	return age;
}
public void setAge(int age) {
	this.age = age;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public Double getSalary() {
	return Salary;
}
public void setSalary(Double salary) {
	Salary = salary;
}
public String getGender() {
	return Gender;
}
public void setGender(String gender) {
	Gender = gender;
}
public int hashCode() {
	return this.id;
}

public boolean equals(Object obj) {
	Account ref=(Account)obj;
	if (this.id==ref.id) {
		return true;
	}
	return false;
}
public String toString() {
    return "Employee{id=" + id +
            ", age=" + age +
            ", name='" + name + '\'' +
            ", salary=" + this.Salary +
            ", gender='" + this.Gender + '\'' +
            '}';
}

}
