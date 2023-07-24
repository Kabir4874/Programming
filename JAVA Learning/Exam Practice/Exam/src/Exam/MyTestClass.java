package Exam;
public class MyTestClass {
    public static void main(String[] args) {
            Student st = new Student();
            st.setsName("Akash");
            st.setsId(130);
            st.setDept("CSE");
        System.out.println("Name: "+st.getsName());
        System.out.println("ID: "+st.getsId());
        System.out.println("Department: "+st.getDept());

    }
}
