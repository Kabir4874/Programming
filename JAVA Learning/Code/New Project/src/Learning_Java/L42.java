package Learning_Java;
class myMainEmployee{
    private int id;
    private String name;
    public myMainEmployee(String myname, int myid)
    {
        id= myid;
        name= myname;
    }
    public int getId()
    {
        return id;
    }
    public String getName(){
        return name;
    }
}
public class L42 {

    public static void main(String[] args) {
     myMainEmployee harry= new myMainEmployee("programming", 45);
        System.out.println(harry.getId());
        System.out.println(harry.getName());



    }
}
