package com.soccet;

import java.io.DataOutputStream;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;
public class ClientCode {

	public static void main(String[] args) {
		try { 
			// loop back address 
			String meg="client says:hello ashsejfg";
			
		
			Socket sender= new Socket(InetAddress.getByName("localhost"),20007);
		 // Socket sender =new Socket("Ashutosh",20005);
			DataOutputStream dout=new DataOutputStream(sender.getOutputStream());
			dout.writeUTF(meg);
			sender.close();
		}  catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
