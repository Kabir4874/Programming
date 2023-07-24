package Learning_Java;
class MyEmployee
{
    private int id;
    private String name;
    public String getName()
    {
        return name;
    }
    public void setName(String n)
    {
        name = n;
    }
    public void setId(int i)
    {
        id= i;
    }
    public int getId()
    {
        return id;
    }
}
public class L40 {
    public static void main(String[] args) {
        MyEmployee harry = new MyEmployee();
        harry.setName("Kabir");
        harry.setId(32);
        System.out.println(harry.getName());
        System.out.println(harry.getId());
    }
}
