package Ball_Example;

public class Baseball extends Ball{
    Player player_baseball;
    public Baseball(String brandName, int size, Player player_baseball ) {
        this.brandName = brandName;
        this.size = size;
        this.player_baseball= player_baseball;
    }

    @Override
    public void toss() {
        System.out.println("Toss");
    }

    @Override
    public void bounce() {
        System.out.println("Bounce");
    }

    public void baseDisplay(){
        System.out.println(this.brandName);
        System.out.println(this.size);
        System.out.println(player_baseball.getPlayerName());
        System.out.println(player_baseball.getPlayerNo());
    }
}
