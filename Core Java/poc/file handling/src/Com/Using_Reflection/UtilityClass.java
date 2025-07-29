package Com.Using_Reflection;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.lang.reflect.InvocationTargetException;
import java.util.Scanner;

public class UtilityClass {
      public static Connection GetObject() {
		try {
						FileInputStream Data=new FileInputStream("Reflection_read.txt");
						  Scanner Sc=new Scanner(Data);
						  String Classname=Sc.nextLine();
						  // this is reflection code
						  Class<?> Cls=Class.forName(Classname);
						  System.out.println(Cls.getName());
						return (Connection) Cls.getDeclaredConstructor().newInstance();
					} catch (FileNotFoundException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (ClassNotFoundException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (InstantiationException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (IllegalAccessException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (IllegalArgumentException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (InvocationTargetException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (NoSuchMethodException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					} catch (SecurityException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					return GetObject();
      }
}
