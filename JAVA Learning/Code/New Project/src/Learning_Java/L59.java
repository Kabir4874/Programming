package Learning_Java;
interface camera2 {
    void takeSnap();

    void recordVideo();

    default void recordIn4k() {
        greet();
        System.out.println("Recording in 4k");
    }

    private void greet() {
        System.out.println("Good morning");
    }
}

interface wifi2 {
    String[] getNetworks();

//    void connectToNetwork(String network);
}

class myCellPhone2 {
    void callNumber(int number) {
        System.out.println("Calling" + number);
    }

    void pickCall() {
        System.out.println("Connecting...");
    }

}

class mySmartPhone2 extends myCellPhone2 implements wifi2, camera2 {
    public void takeSnap() {
        System.out.println("Taking Snap");
    }

    public void recordVideo() {
        System.out.println("Taking snap");
    }

    public String[] getNetworks() {
        System.out.println("Getting List of Networks");
        String[] networkList = {"Harry", "Prashanth", "Anjali5G"};
        return networkList;
    }
}
public class L59 {
    public static void main(String[] args) {

        camera2 cam1= new mySmartPhone2();
        cam1.recordIn4k();




    }
}

