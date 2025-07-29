package com.start.frist;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Graph {
Map <Node,List<Node>> adjancylist;

public Graph() {
	this.adjancylist=new HashMap<>();
}
public void insertnode(Node node) {
	this.adjancylist.put(node, new ArrayList());
}
public void print()
{
	for(Node current:this.adjancylist.keySet()) {
		System.out.println(current.getData());
		List<Node> temp=this.adjancylist.get(current);
	}
}
public void connectNode(Node node1,Node node2) {
      this.adjancylist.get(node1).add(node2);
      
      // for directed grapg  this line commentout
      this.adjancylist.get(node2).add(node1);
}
}
