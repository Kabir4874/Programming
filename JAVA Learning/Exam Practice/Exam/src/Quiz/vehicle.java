package Quiz;

public abstract class vehicle {
    public vehicle(){
        System.out.println("Vehicle is Created.");
    }
    public abstract void move();
    public void carry(){
        System.out.println("All Vehicle Carry Loads");
    }
}

