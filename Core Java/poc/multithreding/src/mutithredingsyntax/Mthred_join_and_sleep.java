package mutithredingsyntax;


public class Mthred_join_and_sleep extends Thread {
    public static void main(String[] args) {
        Thread t1 = new Mthred_join_and_sleep();
        Thread t2 = new Mthred_join_and_sleep();

        t1.setName("first thread");
        t2.setName("second thread");

        t1.start();
        t2.start();

        try {
            t1.join(); // Wait for t1 to finish
            t2.join(); // Wait for t2 to finish
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("main thread executed");
    }

    @Override
    public void run() {
        try {
            if (Thread.currentThread().getName().equals("first thread")) {
                process1();
                Thread.sleep(1000); // Pause for 1 second before process2
                process2();
            } else {
                process3();
                Thread.sleep(1500); // Pause for 1.5 seconds before process4
                process4();
            }
        } catch (InterruptedException e) {
            System.out.println(Thread.currentThread().getName() + " interrupted while sleeping");
        }
    }

    public void process1() {
        System.out.println("p1 call by " + Thread.currentThread().getName());
    }

    public void process2() {
        System.out.println("p2 call by " + Thread.currentThread().getName());
    }

    public void process3() {
        System.out.println("p3 call by " + Thread.currentThread().getName());
    }

    public void process4() {
        System.out.println("p4 call by " + Thread.currentThread().getName());
    }
}
