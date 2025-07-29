package com.card;


import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
@WebServlet("/CheckHistroy")
public class HistoryServlet extends HttpServlet {

	public void  service(HttpServletRequest req,HttpServletResponse res) throws IOException {
		
		PrintWriter myout = res.getWriter();
		myout.write("<h2> this is history</h2>");
	}
}
