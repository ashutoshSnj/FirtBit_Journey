package com.first.point;

import java.util.ArrayList;

public class Target {
  int no;
  ArrayList <observer> list=new ArrayList<observer>();
  
  
  
public void insert(int i) {
	this.no=i;
	if(!list.isEmpty()) {
		this.getNotification();
	}
	
}
public void getNotification() {
	for(observer ref:list) {
		ref.update(this.no);
	}
	
}
public void addlist(observer obj) {
	list.add(obj);
}
   
  
}
