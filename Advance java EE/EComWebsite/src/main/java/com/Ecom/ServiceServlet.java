package com.Ecom;

import java.io.IOException;

import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/servlet1")
public class ServiceServlet extends HttpServlet {
	
	public void doPost(HttpServletRequest req,HttpServletResponse res) throws IOException {
		
		String var=req.getParameter("calltoAction");

		cardaddition ref=new cardaddition();
		if(var.equals("add to cart")) {
			int qty=Integer.parseInt(req.getParameter("qty"));
			int id=Integer.parseInt(req.getParameter("id"));
			product pro=new product(id,qty);
			
			String str= ref.addtocart(pro);
			if(str.equals("continue")) {
				res.sendRedirect("UI.html");
			}
		}
		else {
		       
		        ref.store();
		}
		
		
	}
}
