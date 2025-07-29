package com.first.point;

public class FristObserver implements observer {
  Target target;
	public FristObserver(Target target)  {
	 this.target=target;
	 this.target.addlist(this);
	}

	@Override
	public void update(int no) {
		System.out.println("Frist observer get msg = "+ no);
	}

}
