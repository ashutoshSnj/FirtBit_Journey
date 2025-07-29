package com.mysocet;

import java.io.DataInputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class ServerCode {
	public static void main(String[] args) {
		 
		try {
			ServerSocket server=new ServerSocket(20000);
			Socket receiver=server.accept();
			DataInputStream din=new DataInputStream(receiver.getInputStream());
			String msg=din.readUTF();
			System.out.println("Server reciver : "+msg);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
//map map list
	}
}

