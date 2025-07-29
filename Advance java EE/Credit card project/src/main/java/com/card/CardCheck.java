package com.card;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/credit") // url pattern of the class
       //this is known as url pattern of the servlet
// this is service layer componant
public class CardCheck extends HttpServlet {

	public void service(HttpServletRequest req,HttpServletResponse res) throws IOException, ServletException {
		String name=req.getParameter("username");
		 String accno=req.getParameter("accno");
		 String pass=req.getParameter("password");
		 String date=req.getParameter("expdate");
		
		 PrintWriter myout=res.getWriter();
		 Card obj=new Card(accno,name,date,pass);
		    creditver obj1=new creditver();
		    boolean check=obj1.verify(obj);
		 /*   if(check) {
		    	myout.println("verify Sucseffully");
		    }
		    else {
		    	myout.println("not verify");
		    }*/
		    
		    if(check) {
		    	RequestDispatcher str=req.getRequestDispatcher("CheckHistroy");
		    	str.forward(req, res);
		    }
		    else {
		    	res.sendRedirect("Error.html");
		    	
		    }
		
		 
	}
	//http://localhost:8080/Creditcardvalidation/credit
		//?username=ashu&accno=85&password=996&cv=87&expdate=
	     // this is known as query string
	
}
