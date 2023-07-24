package Learning_Java;
interface camera {
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

interface wifi {
    String[] getNetworks();

    void connectToNetwork(String network);
}

class myCellPhone {
    void callNumber(int number) {
        System.out.println("Calling" + number);
    }

    void pickCall() {
        System.out.println("Connecting...");
    }

}

class mySmartPhone extends myCellPhone implements wifi, camera {
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

    public void connectToNetwork(String network) {
        System.out.println("Connecting to " + network);
    }
}

public class L57 {
    public static void main(String[] args) {
        mySmartPhone ms = new mySmartPhone();
        ms.recordIn4k();
        String[] ar = ms.getNetworks();
        for (String item : ar) {
            System.out.println(item);
        }
    }
}
