package com.soccet;

import java.io.DataOutputStream;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;

public class SecondClient {

	public static void main(String[] args) {
		try { 
			
			String meg="client says:hello";
			//Socket sender= new Socket(("192.168.204.181"),20000);
			 Socket sender =new Socket( InetAddress.getByName("localhost"),20005);
			//Socket sender = new Socket(InetAddress.getByName("Ashutosh"), 20007); 
			                       // loop back address 
			// Resolves to ::1 (IPv6) or 127.0.0.1 (IPv4) based on system preference

			DataOutputStream dout=new DataOutputStream(sender.getOutputStream());
			dout.writeUTF(meg);
		}  catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
