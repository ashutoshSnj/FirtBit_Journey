package mutithredingsyntax;


public class exp_on_thread extends Thread {
    public static void main(String[] args) {
        Thread t1 = new exp_on_thread();
        t1.setName("first");
        
        t1.start();
        
        try {
            t1.join(); // Main thread waits for t1 to complete.
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        
        System.out.println("Main thread executed");
    }

    @Override
    public void run() {
        System.out.println("Thread " + Thread.currentThread().getName() + " started");
        try {
            Thread.sleep(2000); // Sleep for 2 seconds
            System.out.println("Thread " + Thread.currentThread().getName() + " completed");
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
