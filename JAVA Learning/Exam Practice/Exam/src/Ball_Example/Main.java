package Ball_Example;

public class Main {
    public static void main(String[] args) {
        Player p= new Player("Kabir", 1);
        Baseball b1= new Baseball("Baseball",26, p);
       b1.baseDisplay();
    }
}
