package Exam;

public class Student {
    private String sName;
    private int sId;
    private String dept;
    public void setsName(String sName)
    {
        this.sName = sName;
    }
    public void setsId(int sId) {
        this.sId = sId;
    }
    public void setDept(String dept)
    {
        this.dept = dept;
    }
    public String getsName() {
        return sName;
    }
    public int getsId() {
        return sId;
    }

    public String getDept() {
        return dept;
    }
}
