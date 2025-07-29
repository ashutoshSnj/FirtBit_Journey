package com.mysocet;

import java.io.DataOutputStream;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;

public class clientcode {


	public static void main(String[] args) {
		try { 
			// loop back address 
			String meg="client says:hello";
			Socket sender= new Socket(InetAddress.getByName("localhost"),20000);
			DataOutputStream dout=new DataOutputStream(sender.getOutputStream());
			dout.writeUTF(meg);
		}  catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
