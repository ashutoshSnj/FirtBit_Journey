package com.first.point;

public class SecondObserver implements observer {
     Target target;
	public SecondObserver(Target target) {
		this.target=target;
		target.addlist(this);
	}

	@Override
	public void update(int no) {
			System.out.println("Second Observer get msg" + no);
	}

}
