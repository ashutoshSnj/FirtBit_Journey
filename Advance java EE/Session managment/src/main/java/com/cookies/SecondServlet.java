package com.cookies;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.Cookie;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/SecondServlet")
public class SecondServlet extends HttpServlet{

	public void service(HttpServletRequest req , HttpServletResponse res) throws IOException {
		  res.setContentType("text/html");
		 PrintWriter ptr=res.getWriter();
		 //geting all the cockes
		Cookie[] cookies = req.getCookies();
		 System.out.println(cookies);
		boolean f=false;
		String name="";
		if(cookies==null) {
			ptr.println("You are new user go home page");
		}
		else {
			for(Cookie co:cookies) {
				String str=co.getName();
				if(str.equals("user_name")) {
					f=true;
					name=co.getValue();
				}
				
			}
		}
		if(f) {
			 ptr.println("<h1> your name is "+name+" Welcome to second servlet </h1>");
		}
		else {
			ptr.println("You are new user go home page");
		}
		 
		
	}
}
