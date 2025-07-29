package com.cookies;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.Cookie;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/servlet1")
public class servletfrist extends HttpServlet {
	 public void service(HttpServletRequest req , HttpServletResponse rep) throws IOException {
		 String name=req.getParameter("name");
		 rep.setContentType("text/html");
		 PrintWriter ptr=rep.getWriter();
		 ptr.println("<h1> your name is "+name+" Welcome to my web </h1>");
		
		
		 ptr.println("<h1><a href='SecondServlet'> go to servlet 2 </a></h1>");
		//create a cookie
		 Cookie cook=new Cookie("user_name",name);
		  cook.setPath("/"); // Fix: Make cookie accessible in all servlets
		 rep.addCookie(cook);
		
		
		
	 }

}
