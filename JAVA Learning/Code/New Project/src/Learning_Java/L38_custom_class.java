package Learning_Java;

class employee {
    int id;
    int salary;
    String name;

    public void printDetails() {
        System.out.println("My id is " + id);
        System.out.println("and my name is " + name);
    }

    public int getSalary() {
        return salary;
    }

}

public class L38_custom_class {
    public static void main(String[] args) {

        employee harry = new employee();
        harry.id = 32;
        harry.name = "Kabir";
        harry.salary = 50000;
        harry.printDetails();
        int salary = harry.getSalary();
        System.out.println(salary);
        /*System.out.println(harry.id);
        System.out.println(harry.name);*/
    }
}
