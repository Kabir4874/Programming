package Ball_Example;

public class Player {
    private  String playerName;
    private  int playerNo;
    public Player(String playerName, int playerNo){
        this.playerName= playerName;
        this.playerNo= playerNo;
    }

    public String getPlayerName() {
        return playerName;
    }

    public int getPlayerNo() {
        return playerNo;
    }

    public void setPlayerName(String playerName) {
        this.playerName = playerName;
    }
    public void setPlayerNo(int playerNo) {
        this.playerNo = playerNo;
    }
    public void display(){
        System.out.println(this.playerName);
        System.out.println(this.playerNo);
    }
}
