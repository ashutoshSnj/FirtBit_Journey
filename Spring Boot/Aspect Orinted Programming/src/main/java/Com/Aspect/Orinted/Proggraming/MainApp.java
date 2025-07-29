package Com.Aspect.Orinted.Proggraming;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class MainApp {

	public static void main(String[] args) {
		ApplicationContext application=new ClassPathXmlApplicationContext("Config.xml");
		Student obj=(Student) application.getBean("stud");
		System.out.println(obj.getClass().getName());
		obj.takeExams();
		obj.takeMock();
		obj.Complite_Addmission();
				}

}
